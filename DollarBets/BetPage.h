//
//  BetPage.h
//  DollarBets
//
//  Created by Richard Kirk on 9/8/11.
//  Copyright (c) 2011 Home. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "Bet.h"
@class BetPage;
@protocol BetPageControllerDelegate <NSObject>

-(void)betPageWillAppear:(BetPage *)betPage;
-(void)didSelectphoto:(BetPage *)onPage;
-(void)didSelectTweet:(BetPage *)onPage;
-(void)didselectEdit:(BetPage *)onPage;
-(void)didselectBack:(BetPage *)onPage;


-(void)didTapPage:(BetPage *)onPage;



@end

@interface BetPage : UIViewController < UITextViewDelegate, UIGestureRecognizerDelegate , UIScrollViewDelegate>
{
    Bet *bet;
    UIScrollView *scrollView;
    UILabel *titleLabel;
    UILabel *dateLabel;
    UIImageView *dollarImageView;
    UIImageView *mapViewCoverUpImageView;
    UITextView *descriptionTextView;
    NSString * pageNum;
  
    int editState;
    bool newBet;
    bool overlayShowing;
    

}
@property (assign)id delegate;
@property (strong, nonatomic) Bet *bet;
@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UILabel *dateLabel;
@property (strong, nonatomic) IBOutlet UITextView *descriptionTextView;
@property (strong, nonatomic) IBOutlet UITextView *amountTextView;

@property (strong, nonatomic) IBOutlet UILabel *amountLabel;

@property (strong, nonatomic) IBOutlet UILabel *pageNumberLabel;

@property (strong,nonatomic) NSString* pageNum;
@property (strong, nonatomic) IBOutlet UIButton *photoButton;
@property (strong, nonatomic) IBOutlet UIButton *tweetButton;


@property (strong, nonatomic) IBOutlet UIView *gestureView;
@property (strong, nonatomic) IBOutlet UIView *gestureViewTwo;

@property (strong, nonatomic) IBOutlet UIView *overlayView;


-(id)initWithBet:(Bet*)aBet;
-(id)initAsNewWithOpponent:(Opponent *)opp;
-(void)setUpAmountLabel;
- (IBAction)backButtonSelected:(id)sender;

- (IBAction)editButtonSelected:(id)sender;
- (void)editButtonSelected;
- (IBAction)photoButtonSelected:(id)sender;
- (IBAction)tweetButtonSelected:(id)sender;

-(void)didTapPage;

@end


