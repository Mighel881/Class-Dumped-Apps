//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface AWEStudioSuperEntranceActivityTimeModel : AWEBaseApiModel <NSCoding>
{
    NSString *_startTimeString;
    NSString *_endTimeString;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *endTimeString; // @synthesize endTimeString=_endTimeString;
@property(copy, nonatomic) NSString *startTimeString; // @synthesize startTimeString=_startTimeString;
- (void).cxx_destruct;
- (double)endTime;
- (double)startTime;
- (_Bool)isEqualToModel:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
