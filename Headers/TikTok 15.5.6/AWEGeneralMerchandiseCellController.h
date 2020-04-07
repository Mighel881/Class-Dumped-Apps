//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEModernFeedCellControllerProtocol-Protocol.h"

@class NSString, UIImageView, UILabel;
@protocol AWEModernFeedCellContext;

@interface AWEGeneralMerchandiseCellController : UIViewController <AWEModernFeedCellControllerProtocol>
{
    id <AWEModernFeedCellContext> _context;
    UIImageView *_merchandiseImageView;
    UILabel *_merchandiseDescriptionLabel;
    UILabel *_merchandisePriceLabel;
    UILabel *_merchandiseSourceLabel;
    UIImageView *_merchandiseSourceImageView;
    CDUnknownBlockType _viewTappedBlock;
    NSString *_keyWord;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
+ (void)__awe__codeRunnerRun_45;
@property(copy, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(copy, nonatomic) CDUnknownBlockType viewTappedBlock; // @synthesize viewTappedBlock=_viewTappedBlock;
@property(retain, nonatomic) UIImageView *merchandiseSourceImageView; // @synthesize merchandiseSourceImageView=_merchandiseSourceImageView;
@property(retain, nonatomic) UILabel *merchandiseSourceLabel; // @synthesize merchandiseSourceLabel=_merchandiseSourceLabel;
@property(retain, nonatomic) UILabel *merchandisePriceLabel; // @synthesize merchandisePriceLabel=_merchandisePriceLabel;
@property(retain, nonatomic) UILabel *merchandiseDescriptionLabel; // @synthesize merchandiseDescriptionLabel=_merchandiseDescriptionLabel;
@property(retain, nonatomic) UIImageView *merchandiseImageView; // @synthesize merchandiseImageView=_merchandiseImageView;
@property(retain, nonatomic) id <AWEModernFeedCellContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)configMerchandisePrice:(long long)arg1;
- (id)formattedPriceWithData:(long long)arg1;
- (void)configMerchandiseDesc:(id)arg1 positions:(id)arg2;
- (void)configWithModel:(id)arg1 keyWord:(id)arg2 logPassback:(id)arg3;
- (void)didStartShowing;
- (void)viewTapped;
- (void)footerViewTapped;
- (void)updateWithModel:(id)arg1;
- (void)configureUI;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
