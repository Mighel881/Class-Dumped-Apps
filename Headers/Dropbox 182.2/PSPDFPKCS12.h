//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/NSCoding-Protocol.h>

@class NSData;

@interface PSPDFPKCS12 : NSObject <NSCoding>
{
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)unlockWithPassword:(id)arg1 done:(CDUnknownBlockType)arg2;
- (id)initWithData:(id)arg1;
- (id)init;

@end
