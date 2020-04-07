//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/TProcessorFactory-Protocol.h>

@class NSString;
@protocol TProcessor;

@interface TSharedProcessorFactory : NSObject <TProcessorFactory>
{
    id <TProcessor> _sharedProcessor;
}

@property(retain, nonatomic) id <TProcessor> sharedProcessor; // @synthesize sharedProcessor=_sharedProcessor;
- (void).cxx_destruct;
- (id)processorForTransport:(id)arg1;
- (id)initWithSharedProcessor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
