//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/AVPlayerItemOutputPullDelegate-Protocol.h>

@class NSString;
@protocol AVPlayerItemOutputPullDelegate;

@interface TAVAVPlayerItemOutputPullDelegateProxy : NSObject <AVPlayerItemOutputPullDelegate>
{
    id <AVPlayerItemOutputPullDelegate> _proxyDelegate;
}

@property(nonatomic) __weak id <AVPlayerItemOutputPullDelegate> proxyDelegate; // @synthesize proxyDelegate=_proxyDelegate;
- (void).cxx_destruct;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)outputSequenceWasFlushed:(id)arg1;
- (id)initWithProxyDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
