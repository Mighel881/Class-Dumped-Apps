//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEAwemeDetailBaseViewController.h"

@class AWEAdOperationGuideView;

@interface AWEAwemeDetailCellViewController : AWEAwemeDetailBaseViewController
{
    AWEAdOperationGuideView *_adOperationView;
}

@property(retain, nonatomic) AWEAdOperationGuideView *adOperationView; // @synthesize adOperationView=_adOperationView;
- (void).cxx_destruct;
- (void)configCommentInputView;
- (void)setReferString:(id)arg1;
- (void)closeAdOperationViewForCommentInputMaskView;
- (void)adOperationGuideViewTapped;
- (void)closeAdOperationView:(unsigned long long)arg1;
- (void)commentInputViewUserInteractionOn:(id)arg1;
- (void)closeAdOperationViewWhenViewWillDisappear:(id)arg1;
- (void)showAdOperationView:(id)arg1;
- (void)configAdOperationView:(id)arg1;
- (void)setHideMusicInfoViewFlag:(_Bool)arg1;
- (void)setModel:(id)arg1;
- (void)prepareForReuse;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

@end

