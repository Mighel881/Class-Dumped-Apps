//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBPasscodeCrossAppAuthHelper.h>

#import <DropboxExtensions/DBPasscodeUICrossAppAuthInfoProvider-Protocol.h>

@class NSString;

@interface DBDropboxExtensionPasscodeCrossAppAuthHelper : DBPasscodeCrossAppAuthHelper <DBPasscodeUICrossAppAuthInfoProvider>
{
}

- (long long)runningApplication;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *currentlyIdentifiedApplicationName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *runningApplicationName;
@property(readonly) Class superclass;

@end
