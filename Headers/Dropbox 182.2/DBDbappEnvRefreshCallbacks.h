//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBEnvRefreshCallbacks-Protocol.h>

@class DBCommonEnv;

@interface DBDbappEnvRefreshCallbacks : NSObject <DBEnvRefreshCallbacks>
{
    DBCommonEnv *_env;
}

@property(nonatomic) __weak DBCommonEnv *env; // @synthesize env=_env;
- (void).cxx_destruct;
- (void)refreshNetworkState;
- (void)refreshBatteryAndChargingState;

@end
