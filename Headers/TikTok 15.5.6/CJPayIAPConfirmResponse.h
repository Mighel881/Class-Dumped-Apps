//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CJPayBaseResponse.h"

@class NSString;

@interface CJPayIAPConfirmResponse : CJPayBaseResponse
{
    NSString *_tradeNo;
    NSString *_deleteOrderCache;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString *deleteOrderCache; // @synthesize deleteOrderCache=_deleteOrderCache;
@property(copy, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
- (void).cxx_destruct;

@end
