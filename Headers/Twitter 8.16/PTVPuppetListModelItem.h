//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, PTVPuppet;

@interface PTVPuppetListModelItem : NSObject
{
    NSString *_identifier;
    PTVPuppet *_puppet;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) PTVPuppet *puppet; // @synthesize puppet=_puppet;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *details;
@property(readonly, nonatomic) NSString *displayName;
- (id)initWithIdentifier:(id)arg1 puppet:(id)arg2 error:(id)arg3;

@end

