//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelegramCore/MTContextChangeListener-Protocol.h>

@interface _TtC12TelegramCoreP33_6A0C3ED56D783C219D3E66D59DC5F1A513NetworkHelper : NSObject <MTContextChangeListener>
{
    // Error parsing type: , name: requestPublicKeys
    // Error parsing type: , name: isContextNetworkAccessAllowedImpl
    // Error parsing type: , name: contextProxyIdUpdated
    // Error parsing type: , name: contextLoggedOutUpdated
}

- (void).cxx_destruct;
- (id)init;
- (void)contextLoggedOut:(id)arg1;
- (void)contextApiEnvironmentUpdated:(id)arg1 apiEnvironment:(id)arg2;
- (id)isContextNetworkAccessAllowed:(id)arg1;
- (id)fetchContextDatacenterPublicKeys:(id)arg1 datacenterId:(long long)arg2;

@end
