//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGMediaAttachment.h>

#import <TelegramUI/NSCoding-Protocol.h>
#import <TelegramUI/TGMediaAttachmentParser-Protocol.h>

@class NSString, TGWebDocument;

@interface TGInvoiceMediaAttachment : TGMediaAttachment <TGMediaAttachmentParser, NSCoding>
{
    _Bool _shippingAddressRequested;
    _Bool _isTest;
    int _receiptMessageId;
    NSString *_title;
    NSString *_text;
    TGWebDocument *_photo;
    NSString *_currency;
    long long _totalAmount;
    NSString *_invoiceStartParam;
}

@property(readonly, nonatomic) _Bool isTest; // @synthesize isTest=_isTest;
@property(readonly, nonatomic) _Bool shippingAddressRequested; // @synthesize shippingAddressRequested=_shippingAddressRequested;
@property(readonly, nonatomic) NSString *invoiceStartParam; // @synthesize invoiceStartParam=_invoiceStartParam;
@property(readonly, nonatomic) int receiptMessageId; // @synthesize receiptMessageId=_receiptMessageId;
@property(readonly, nonatomic) long long totalAmount; // @synthesize totalAmount=_totalAmount;
@property(readonly, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, nonatomic) TGWebDocument *photo; // @synthesize photo=_photo;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)webpage;
- (id)parseMediaAttachment:(id)arg1;
- (void)serialize:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 text:(id)arg2 photo:(id)arg3 currency:(id)arg4 totalAmount:(long long)arg5 receiptMessageId:(int)arg6 invoiceStartParam:(id)arg7 shippingAddressRequested:(_Bool)arg8 isTest:(_Bool)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
