//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MtProtoKit/NSCoding-Protocol.h>

@class NSArray;

@interface MTDatacenterAddressSet : NSObject <NSCoding>
{
    NSArray *_addressList;
}

@property(readonly, nonatomic) NSArray *addressList; // @synthesize addressList=_addressList;
- (void).cxx_destruct;
- (id)firstAddress;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAddressList:(id)arg1;

@end
