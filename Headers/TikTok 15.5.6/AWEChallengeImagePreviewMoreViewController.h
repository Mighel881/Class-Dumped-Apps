//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AWEChallengeModel, NSString, UILabel;

@interface AWEChallengeImagePreviewMoreViewController : UIViewController
{
    NSString *_processId;
    AWEChallengeModel *_model;
    UILabel *_uploadLabel;
    UILabel *_uploadDescLabel;
}

@property(retain, nonatomic) UILabel *uploadDescLabel; // @synthesize uploadDescLabel=_uploadDescLabel;
@property(retain, nonatomic) UILabel *uploadLabel; // @synthesize uploadLabel=_uploadLabel;
@property(retain, nonatomic) AWEChallengeModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *processId; // @synthesize processId=_processId;
- (void).cxx_destruct;
- (void)uploadChallengeImage_IMP:(id)arg1;
- (void)uploadChallengeImage:(id)arg1;
- (void)p_addNaviBar;
- (void)p_setupUI;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;

@end
