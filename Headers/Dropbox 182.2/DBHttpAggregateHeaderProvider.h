//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBHttpHeaderProvider-Protocol.h>

@class NSMutableArray, NSString;

@interface DBHttpAggregateHeaderProvider : NSObject <DBHttpHeaderProvider>
{
    NSMutableArray *_providers;
}

- (void).cxx_destruct;
- (id)requestHeadersForUser:(id)arg1;
- (void)enumerateProvidersUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeProvider:(id)arg1;
- (void)addProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
