//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HeloBaseReq.h"

@class NSString;

@interface HeloSendAuthReq : HeloBaseReq
{
    _Bool _onlyAuth;
    _Bool _syncHis;
    NSString *_bindName;
    NSString *_bindIcon;
    NSString *_code;
}

@property(nonatomic) _Bool syncHis; // @synthesize syncHis=_syncHis;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) _Bool onlyAuth; // @synthesize onlyAuth=_onlyAuth;
@property(copy, nonatomic) NSString *bindIcon; // @synthesize bindIcon=_bindIcon;
@property(copy, nonatomic) NSString *bindName; // @synthesize bindName=_bindName;
- (void).cxx_destruct;

@end

