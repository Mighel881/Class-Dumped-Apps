//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/NSObject-Protocol.h>
#import <Core/WAXOutgoingStanza-Protocol.h>

@class NSObject, NSString, WADomainJID, XMPPIQStanza;
@protocol WAXOutgoingStanzaElementEsPaymentEUVerifyCard3DSRequest_Account;

@protocol WAXOutgoingStanzaEsPaymentEUVerifyCard3DSRequest <NSObject, WAXOutgoingStanza>
@property(readonly, nonatomic) NSObject<WAXOutgoingStanzaElementEsPaymentEUVerifyCard3DSRequest_Account> *account;
@property(readonly, copy, nonatomic) NSString *xmlns;
@property(readonly, copy, nonatomic) NSString *id_p;
@property(readonly, nonatomic) WADomainJID *to;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, nonatomic) XMPPIQStanza *xmppIQStanza;
@end

