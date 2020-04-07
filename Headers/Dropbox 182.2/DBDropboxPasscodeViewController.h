//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBPasscodeViewController.h>

#import <DropboxExtensions/DBPasscodeUIPresenter-Protocol.h>

@class NSString;
@protocol DBPasscodeUICrossAppAuthInfoProvider;

@interface DBDropboxPasscodeViewController : DBPasscodeViewController <DBPasscodeUIPresenter>
{
}

- (void)dismissPasscodeAnimated:(_Bool)arg1;
- (void)presentPasscodeModalAnimated:(_Bool)arg1;
- (void)presentMainPasscodeModallyWithCompletion:(CDUnknownBlockType)arg1 dismissedBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(retain, nonatomic) id <DBPasscodeUICrossAppAuthInfoProvider> crossAppAuthInfoProvider;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
