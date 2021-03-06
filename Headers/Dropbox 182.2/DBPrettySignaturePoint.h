//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBPrettySignaturePoint : NSObject
{
    double _time;
    unsigned long long _pointType;
    struct CGPoint _position;
    struct CGPoint _velocity;
}

@property(nonatomic) unsigned long long pointType; // @synthesize pointType=_pointType;
@property(nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
- (_Bool)isDifferentCurveThan:(id)arg1;
- (id)dict;
- (id)velocityDict;
- (id)pointDict;

@end

