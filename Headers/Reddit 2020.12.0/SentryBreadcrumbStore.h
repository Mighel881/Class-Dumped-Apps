//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sentry/SentrySerializable-Protocol.h>

@class NSString, SentryFileManager;

@interface SentryBreadcrumbStore : NSObject <SentrySerializable>
{
    unsigned long long _maxBreadcrumbs;
    SentryFileManager *_fileManager;
}

@property(retain, nonatomic) SentryFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(nonatomic) unsigned long long maxBreadcrumbs; // @synthesize maxBreadcrumbs=_maxBreadcrumbs;
- (void).cxx_destruct;
- (id)serialize;
- (void)clear;
- (unsigned long long)count;
- (void)addBreadcrumb:(id)arg1;
- (id)initWithFileManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

