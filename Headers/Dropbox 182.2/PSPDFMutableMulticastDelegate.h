//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFMulticastDelegate.h>

@interface PSPDFMutableMulticastDelegate : PSPDFMulticastDelegate
{
    struct recursive_mutex _lock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)checkDelegateImplementsProtocol:(id)arg1;
- (unsigned long long)indexForDelegate:(id)arg1;
- (void)unlock;
- (void)lock;

@end

