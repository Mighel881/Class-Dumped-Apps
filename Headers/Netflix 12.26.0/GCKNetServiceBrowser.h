//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GCKNetServiceBrowserDelegate;

__attribute__((visibility("hidden")))
@interface GCKNetServiceBrowser : NSObject
{
    id <GCKNetServiceBrowserDelegate> _delegate;
}

+ (id)netServiceBrowserForServiceType:(id)arg1 discoveryProtocol:(long long)arg2;
@property(nonatomic) __weak id <GCKNetServiceBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopSearch;
- (_Bool)startSearchWithSubtypes:(id)arg1;
- (_Bool)startSearch;

@end

