//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PushOpenAlertHeaderView;

@interface AWEPushOpenAlertManager : NSObject
{
    _Bool _shouldShow;
    unsigned long long _pushGuideAlertType;
    PushOpenAlertHeaderView *_headerView;
}

+ (id)sharedInstance;
@property(retain, nonatomic) PushOpenAlertHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool shouldShow; // @synthesize shouldShow=_shouldShow;
@property(nonatomic) unsigned long long pushGuideAlertType; // @synthesize pushGuideAlertType=_pushGuideAlertType;
- (void).cxx_destruct;
- (void)clearManagerInfo;
- (void)showPushOpenAlertIfNeeded;
- (void)setPushOpenAlertWithNickname:(id)arg1 notice:(id)arg2 avatarModel:(id)arg3 type:(unsigned long long)arg4;

@end
