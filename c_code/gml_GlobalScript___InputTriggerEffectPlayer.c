// gml_GlobalScript___InputTriggerEffectPlayer @ 0x1400dadc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_GlobalScript___InputTriggerEffectPlayer
                   (longlong *param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 uVar13;
  double **ppdVar11;
  double *pdVar12;
  ulonglong uVar14;
  double local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  double local_1e8;
  byte local_1dc;
  double local_1d8;
  undefined4 local_1cc;
  double local_1c8;
  byte local_1bc;
  double local_1b8;
  undefined4 local_1ac;
  double local_1a8;
  byte local_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  double *local_180;
  double *local_178;
  double *local_170;
  double *local_168;
  double *local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  double local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  undefined4 local_10c;
  double *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  double local_f8;
  undefined4 local_ec;
  double local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  double local_b8;
  undefined4 local_ac;
  double local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  double local_88;
  undefined4 local_7c;
  double local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_158 = 0;
  local_190 = "gml_Script___Apply@anon@898@__InputTriggerEffectGamepad@__InputTriggerEffectGamepad";
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  local_188 = 0x1d;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_1e8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  uStack_5c = 0xffffff;
  local_68 = 0.0;
  uStack_11c = 0xffffff;
  local_128 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0.0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  local_134 = 0;
  local_140 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_108 = (double *)((longlong)param_3 + 0xc);
  *(undefined4 *)local_108 = 5;
  *param_3 = 0.0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc8a8) &&
     (_Init_thread_header(&DAT_141ddc8a8), DAT_141ddc8a8 == -1)) {
    DAT_141ddc8b0 = (longlong *)FUN_140e63aa0(DAT_141a03cb8);
    _Init_thread_footer(&DAT_141ddc8a8);
  }
  if (DAT_141ddc063 == '\0') {
    FUN_140e64380(DAT_141ddc8b0,
                  "gml_Script___Apply@anon@898@__InputTriggerEffectGamepad@__InputTriggerEffectGamepad"
                 );
    FUN_140e64380(param_1,
                  "gml_Script___Apply@anon@898@__InputTriggerEffectGamepad@__InputTriggerEffectGamepad"
                 );
  }
  local_188 = 0x3c;
  if (DAT_141ddc063 == '\0') {
    DAT_141ddc063 = '\x01';
    pdVar3 = (double *)(**(code **)(*DAT_141ddc8b0 + 0x10))(DAT_141ddc8b0,DAT_141a03cd8);
    FUN_140e609c0(DAT_141ddc8b0);
    uVar5 = CONCAT44(uVar13,DAT_1419fd6d8);
    pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_208,0,uVar5,0);
    uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (pdVar4 != pdVar3) {
      local_218 = *pdVar4;
      uStack_210 = pdVar4[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar3);
      }
      FUN_140041b80(pdVar3,&local_218);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    local_140 = 0;
    local_138 = 0;
    local_134 = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    pdVar3 = (double *)(**(code **)(*DAT_141ddc8b0 + 0x10))(DAT_141ddc8b0,DAT_141a03ce8);
    uVar5 = CONCAT44(uVar13,DAT_1419fd6d8);
    pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_140,0,uVar5,0);
    uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (pdVar4 != &local_1b8) {
      local_218 = *pdVar4;
      uStack_210 = pdVar4[1];
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_218);
    }
    local_168 = &local_1b8;
    uVar5 = CONCAT44(uVar13,DAT_1419fd6d8);
    pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_d8,0,uVar5,0);
    uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (pdVar4 != &local_1a8) {
      local_218 = *pdVar4;
      uStack_210 = pdVar4[1];
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_218);
    }
    local_160 = &local_1a8;
    FUN_140e609c0(DAT_141ddc8b0);
    pdVar4 = (double *)
             FUN_140e634e0(param_1,param_2,&local_1f8,2,CONCAT44(uVar13,DAT_1419fdca8),&local_168);
    if (pdVar4 != pdVar3) {
      local_218 = *pdVar4;
      uStack_210 = pdVar4[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar3);
      }
      FUN_140041b80(pdVar3,&local_218);
    }
    FUN_140e60910(1);
  }
  local_188 = 0x1f;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = 1.0;
  local_188 = 0x20;
  pdVar3 = (double *)&DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uStack_210 = (double)((ulonglong)uStack_210 & 0xffffffff);
  local_218 = 32775.0;
  iVar2 = FUN_140e851f0(puVar7,&local_218,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)uStack_210 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (iVar2 != 0) {
    local_188 = 0x24;
    if (param_4 < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*param_5;
    }
    uStack_210 = (double)((ulonglong)uStack_210 & 0xffffffff);
    local_218 = 32776.0;
    iVar2 = FUN_140e851f0(puVar7,&local_218,DAT_141955260,0);
    if ((1 << ((byte)((ulonglong)uStack_210 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if (iVar2 == 0) goto LAB_1400db454;
    local_188 = 0x26;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    local_218 = _DAT_141dcb1b8;
    uStack_210 = (double)uRam0000000141dcb1c0;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_218);
    local_180 = &local_1e8;
    if ((param_4 < 1) || (pdVar3 = (double *)*param_5, pdVar3 != &local_1d8)) {
      local_218 = *pdVar3;
      uStack_210 = pdVar3[1];
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_218);
    }
    local_178 = &local_1d8;
    local_218 = _DAT_141dcb1a8;
    uStack_210 = dRam0000000141dcb1b0;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_218);
    local_170 = &local_1c8;
    gml_Script_InputPlugInExists(param_1,param_2,&local_208,3,&local_180);
    local_188 = 0x27;
LAB_1400dcb6b:
    *(undefined4 *)local_108 = 0xd;
    *param_3 = 0.0;
    goto LAB_1400dcba6;
  }
  local_188 = 0x22;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = 0.0;
LAB_1400db454:
  local_188 = 0x2e;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  local_218 = _DAT_1419e1b80;
  uStack_210 = dRam00000001419e1b88;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_218);
  local_180 = &local_1e8;
  uVar5 = gml_Script_InputIconDefineEmpty(param_1,param_2,&local_208,1,&local_180);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_188 = 0x58;
    *param_3 = 0.0;
  }
  else {
    local_188 = 0x30;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd5c8);
    if (pdVar4 != &local_1d8) {
      local_218 = *pdVar4;
      uStack_210 = pdVar4[1];
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_218);
    }
    local_178 = &local_1d8;
    pdVar4 = (double *)gml_Script_InputDeviceIsActive(param_1,param_2,&local_1f8,1,&local_178);
    if (pdVar4 != &local_a8) {
      local_218 = *pdVar4;
      uStack_210 = pdVar4[1];
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_218);
    }
    local_188 = 0x33;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    local_218 = _DAT_1419e1b70;
    uStack_210 = dRam00000001419e1b78;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_218);
    local_180 = &local_1e8;
    ppdVar11 = &local_180;
    uVar5 = gml_Script_InputIconDefineEmpty(param_1,param_2,&local_208,1,ppdVar11);
    uVar13 = (undefined4)((ulonglong)ppdVar11 >> 0x20);
    cVar1 = FUN_140e491e0(uVar5);
    if ((cVar1 != '\0') ||
       (iVar2 = FUN_140e851f0(&local_a8,&DAT_1419df7b0,DAT_141955260,0), iVar2 == 0)) {
      local_188 = 0x33;
      goto LAB_1400dcb6b;
    }
    local_188 = 0x36;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if (param_4 < 2) {
      pdVar4 = (double *)&DAT_1419df7b0;
LAB_1400db6d4:
      local_218 = *pdVar4;
      uStack_210 = pdVar4[1];
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_218);
    }
    else {
      pdVar4 = (double *)param_5[1];
      if (pdVar4 != &local_1e8) goto LAB_1400db6d4;
    }
    local_180 = &local_1e8;
    uVar6 = CONCAT44(uVar13,DAT_1419fcb88);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_208,1,uVar6,&local_180);
    uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
      local_188 = 0x36;
      goto LAB_1400dcb6b;
    }
    local_188 = 0x37;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    if (param_4 < 2) {
      pdVar4 = (double *)&DAT_1419df7b0;
LAB_1400db7be:
      local_218 = *pdVar4;
      uStack_210 = pdVar4[1];
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_218);
    }
    else {
      pdVar4 = (double *)param_5[1];
      if (pdVar4 != &local_1e8) goto LAB_1400db7be;
    }
    iVar2 = DAT_141a03588;
    local_180 = &local_1e8;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1cc = 0;
    local_1d8 = (double)iVar2;
    local_178 = &local_1d8;
    uVar5 = CONCAT44(uVar13,DAT_141a035d8);
    pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_1f8,2,uVar5,&local_180);
    uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (pdVar4 != &local_1c8) {
      local_218 = *pdVar4;
      uStack_210 = pdVar4[1];
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_218);
    }
    local_170 = &local_1c8;
    uVar6 = CONCAT44(uVar13,DAT_1419fcb88);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_208,1,uVar6,&local_170);
    uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 != '\0') {
      local_188 = 0x39;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_dc = 0;
      local_e8 = 0.0;
      local_188 = 0x3a;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_ec = 0;
      local_f8 = 1.0;
      local_188 = 0x40;
      local_218 = _DAT_141dcb1c8;
      uStack_210 = dRam0000000141dcb1d0;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_218);
      local_188 = 0x41;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      pdVar4 = (double *)(**(code **)(*DAT_141ddc8b0 + 8))(DAT_141ddc8b0,DAT_141a03ce8);
      if (pdVar4 != &local_1e8) {
        local_218 = *pdVar4;
        uStack_210 = pdVar4[1];
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_218);
      }
      local_180 = &local_1e8;
      local_178 = &local_e8;
      uVar5 = FUN_140e634e0(param_1,param_2,&local_1f8,0,CONCAT44(uVar13,DAT_1419fd6d8),0);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_208,2,DAT_141a03ca8,&local_180);
      FUN_140e98ef0(param_1,param_2,uVar6,&local_b8,uVar5);
      uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_188 = 0x42;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      if (pdVar4 != &local_1e8) {
        local_218 = *pdVar4;
        uStack_210 = pdVar4[1];
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_218);
      }
      local_180 = &local_1e8;
      local_178 = &local_f8;
      uVar5 = FUN_140e634e0(param_1,param_2,&local_1f8,0,CONCAT44(uVar13,DAT_1419fd6d8),0);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_208,2,DAT_141a03ca8,&local_180);
      FUN_140e98ef0(param_1,param_2,uVar6,&local_b8,uVar5);
      uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_188 = 0x43;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      local_140 = 0;
      local_138 = 0;
      local_134 = 5;
      if (pdVar4 != &local_1e8) {
        local_218 = *pdVar4;
        uStack_210 = pdVar4[1];
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_218);
      }
      local_180 = &local_1e8;
      local_178 = &local_118;
      ppdVar11 = &local_180;
      uVar9 = CONCAT44(uVar13,DAT_141a03ca8);
      pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_1f8,2,uVar9,ppdVar11);
      if (pdVar4 != &local_1c8) {
        local_218 = *pdVar4;
        uStack_210 = pdVar4[1];
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_218);
      }
      local_170 = &local_1c8;
      local_168 = &local_b8;
      pdVar4 = (double *)(**(code **)(*DAT_141ddc8b0 + 8))(DAT_141ddc8b0,DAT_141a03ce8);
      if (param_4 < 2) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)param_5[1];
      }
      uVar14 = (ulonglong)ppdVar11 & 0xffffffffffffff00;
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(puVar7,DAT_141a03558,0x80000000,&local_68,uVar9,uVar14);
      uStack_210 = (double)CONCAT44(uStack_5c,uStack_60);
      local_218 = local_68;
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_218);
      local_160 = &local_1a8;
      if (param_4 < 2) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)param_5[1];
      }
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(puVar7,DAT_141a03588,0x80000000,&local_128,uVar9,uVar14 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar9 >> 0x20);
      local_148 = DAT_141dcb194;
      local_14c = DAT_141dcb190;
      if ((1 << ((byte)DAT_141dcb194 & 0x1f) & 0x46U) == 0) {
        local_154 = DAT_141dcb188;
      }
      else {
        FUN_1400419b0(&local_154,&DAT_141dcb188);
      }
      uVar5 = CONCAT44(uVar13,DAT_1419fcb18);
      puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_140,1,uVar5,&local_160);
      uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_fc = *(undefined4 *)((longlong)puVar7 + 0xc);
      local_100 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
        local_108 = (double *)*puVar7;
      }
      else {
        FUN_1400419b0(&local_108,puVar7);
      }
      local_158 = 1;
      FUN_1400460e0(&local_108,&local_154);
      uVar5 = FUN_140e634e0(param_1,param_2,&local_208,2,CONCAT44(uVar13,DAT_141a01138),&local_170);
      pdVar12 = &local_128;
      FUN_140e98ef0(param_1,param_2,uVar5,&local_108,pdVar12);
      uVar13 = (undefined4)((ulonglong)pdVar12 >> 0x20);
      local_158 = 0;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_148 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_154);
      }
      local_188 = 0x45;
      local_218 = _DAT_141dcb198;
      uStack_210 = dRam0000000141dcb1a0;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_218);
      local_188 = 0x46;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      if (pdVar4 != &local_1e8) {
        local_218 = *pdVar4;
        uStack_210 = pdVar4[1];
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_218);
      }
      local_180 = &local_1e8;
      local_178 = &local_e8;
      uStack_210 = (double)((ulonglong)uStack_210 & 0xffffffff);
      local_218 = 0.0;
      uVar5 = FUN_140e634e0(param_1,param_2,&local_208,2,CONCAT44(uVar13,DAT_141a03ca8),&local_180);
      pdVar12 = &local_218;
      FUN_140e98ef0(param_1,param_2,uVar5,&local_c8,pdVar12);
      uVar13 = (undefined4)((ulonglong)pdVar12 >> 0x20);
      if ((1 << ((byte)((ulonglong)uStack_210 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_188 = 0x47;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      if (pdVar4 != &local_1e8) {
        local_218 = *pdVar4;
        uStack_210 = pdVar4[1];
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_218);
      }
      local_180 = &local_1e8;
      local_178 = &local_f8;
      uStack_210 = (double)((ulonglong)uStack_210 & 0xffffffff);
      local_218 = 0.0;
      ppdVar11 = &local_180;
      uVar5 = FUN_140e634e0(param_1,param_2,&local_208,2,CONCAT44(uVar13,DAT_141a03ca8),ppdVar11);
      pdVar12 = &local_218;
      FUN_140e98ef0(param_1,param_2,uVar5,&local_c8,pdVar12);
      if ((1 << ((byte)((ulonglong)uStack_210 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_188 = 0x48;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03d18);
      if (pdVar4 != &local_1e8) {
        local_218 = *pdVar4;
        uStack_210 = pdVar4[1];
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_218);
      }
      local_180 = &local_1e8;
      local_178 = &local_118;
      local_108 = (double *)(**(code **)(*DAT_141ddc8b0 + 8))(DAT_141ddc8b0,DAT_141a03ce8);
      if (param_4 < 2) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)param_5[1];
      }
      uVar9 = (ulonglong)pdVar12 & 0xffffffffffffff00;
      FUN_140e87440(puVar7,DAT_141a035c8,0x80000000,&local_78,uVar9,
                    (ulonglong)ppdVar11 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar9 >> 0x20);
      if (pdVar8 != &local_1c8) {
        local_218 = *pdVar8;
        uStack_210 = pdVar8[1];
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_218);
      }
      local_170 = &local_1c8;
      uStack_210 = (double)CONCAT44(uStack_6c,uStack_70);
      local_218 = local_78;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_218);
      local_168 = &local_1b8;
      uVar9 = FUN_140e634e0(param_1,param_2,&local_1f8,2,CONCAT44(uVar13,DAT_1419ff4f8),&local_170);
      ppdVar11 = &local_180;
      uVar5 = FUN_140e634e0(param_1,param_2,&local_208,2,DAT_141a03ca8,ppdVar11);
      FUN_140e98ef0(param_1,param_2,uVar5,&local_c8,uVar9);
      local_188 = 0x4b;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      if (param_4 < 2) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)param_5[1];
      }
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(puVar7,DAT_141a03588,0x80000000,&local_128,uVar9,
                    (ulonglong)ppdVar11 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar9 >> 0x20);
      uStack_210._0_4_ = uStack_120;
      uStack_210._4_4_ = uStack_11c;
      local_218 = local_128;
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_218);
      iVar2 = DAT_141a03678;
      local_180 = &local_1e8;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1cc = 0;
      local_1d8 = (double)iVar2;
      local_178 = &local_1d8;
      ppdVar11 = &local_180;
      puVar7 = (undefined8 *)CONCAT44(uVar13,DAT_141a035d8);
      uVar5 = FUN_140e634e0(param_1,param_2,&local_208,2,puVar7,ppdVar11);
      iVar2 = FUN_140e851f0(uVar5,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar2 != 0) {
        local_188 = 0x4b;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        if (param_4 < 2) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)param_5[1];
        }
        uVar9 = (ulonglong)puVar7 & 0xffffffffffffff00;
        FUN_140e87440(puVar10,DAT_141a03588,0x80000000,&local_128,uVar9,
                      (ulonglong)ppdVar11 & 0xffffffffffffff00);
        uVar13 = (undefined4)(uVar9 >> 0x20);
        uStack_210 = (double)CONCAT44(uStack_11c,uStack_120);
        local_218 = local_128;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_218);
        iVar2 = DAT_141a03678;
        local_170 = &local_1c8;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1ac = 0;
        local_1b8 = (double)iVar2;
        local_168 = &local_1b8;
        if (param_4 < 3) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)param_5[2];
        }
        ppdVar11 = &local_170;
        puVar10 = (undefined8 *)
                  FUN_140e634e0(param_1,param_2,&local_1f8,2,CONCAT44(uVar13,DAT_141a035d8),ppdVar11
                               );
        local_148 = *(undefined4 *)((longlong)puVar10 + 0xc);
        local_14c = *(undefined4 *)(puVar10 + 1);
        if ((1 << ((byte)local_148 & 0x1f) & 0x46U) == 0) {
          local_154 = *puVar10;
        }
        else {
          FUN_1400419b0(&local_154,puVar10);
        }
        local_158 = 2;
        FUN_140042560(&local_154,puVar7);
        uStack_210._0_4_ = DAT_141dcb200;
        uStack_210._4_4_ = DAT_141dcb204;
        if ((1 << ((byte)DAT_141dcb204 & 0x1f) & 0x46U) == 0) {
          local_218 = DAT_141dcb1f8;
        }
        else {
          FUN_1400419b0(&local_218,&DAT_141dcb1f8);
        }
        puVar7 = &local_154;
        FUN_140e98ef0(param_1,param_2,&local_128,&local_218,puVar7);
        if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_158 = 0;
        if ((1 << ((byte)local_148 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_154);
        }
      }
      local_188 = 0x4c;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      if (param_4 < 2) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)param_5[1];
      }
      uVar9 = (ulonglong)puVar7 & 0xffffffffffffff00;
      FUN_140e87440(puVar10,DAT_141a03588,0x80000000,&local_128,uVar9,
                    (ulonglong)ppdVar11 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar9 >> 0x20);
      uStack_210 = (double)CONCAT44(uStack_11c,uStack_120);
      local_218 = local_128;
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_218);
      iVar2 = DAT_141a03598;
      local_180 = &local_1e8;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1cc = 0;
      local_1d8 = (double)iVar2;
      local_178 = &local_1d8;
      ppdVar11 = &local_180;
      puVar7 = (undefined8 *)CONCAT44(uVar13,DAT_141a035d8);
      uVar5 = FUN_140e634e0(param_1,param_2,&local_208,2,puVar7,ppdVar11);
      iVar2 = FUN_140e851f0(uVar5,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar2 != 0) {
        local_188 = 0x4c;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        if (param_4 < 2) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)param_5[1];
        }
        uVar9 = (ulonglong)puVar7 & 0xffffffffffffff00;
        FUN_140e87440(puVar10,DAT_141a03588,0x80000000,&local_128,uVar9,
                      (ulonglong)ppdVar11 & 0xffffffffffffff00);
        uVar13 = (undefined4)(uVar9 >> 0x20);
        uStack_210 = (double)CONCAT44(uStack_11c,uStack_120);
        local_218 = local_128;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_218);
        iVar2 = DAT_141a03598;
        local_170 = &local_1c8;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1ac = 0;
        local_1b8 = (double)iVar2;
        local_168 = &local_1b8;
        if (2 < param_4) {
          pdVar3 = (double *)param_5[2];
        }
        puVar7 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_1f8,2,CONCAT44(uVar13,DAT_141a035d8),
                               &local_170);
        local_148 = *(undefined4 *)((longlong)puVar7 + 0xc);
        local_14c = *(undefined4 *)(puVar7 + 1);
        if ((1 << ((byte)local_148 & 0x1f) & 0x46U) == 0) {
          local_154 = *puVar7;
        }
        else {
          FUN_1400419b0(&local_154,puVar7);
        }
        local_158 = 4;
        FUN_140042560(&local_154,pdVar3);
        uStack_210 = (double)CONCAT44(DAT_141dcb1f4,DAT_141dcb1f0);
        if ((1 << ((byte)DAT_141dcb1f4 & 0x1f) & 0x46U) == 0) {
          local_218 = DAT_141dcb1e8;
        }
        else {
          FUN_1400419b0(&local_218,&DAT_141dcb1e8);
        }
        puVar7 = &local_154;
        FUN_140e98ef0(param_1,param_2,&local_128,&local_218,puVar7);
        if ((1 << ((byte)((ulonglong)uStack_210 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        if ((1 << ((byte)local_148 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_154);
        }
      }
      uVar13 = (undefined4)((ulonglong)puVar7 >> 0x20);
      local_188 = 0x4f;
      pdVar3 = (double *)(**(code **)(*DAT_141ddc8b0 + 8))(DAT_141ddc8b0,DAT_141a03cd8);
      if (local_108 != &local_88) {
        local_218 = *local_108;
        uStack_210 = local_108[1];
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_218);
      }
      (**(code **)(*DAT_141ddc8b0 + 8))(DAT_141ddc8b0,DAT_141a03ce8);
      FUN_140e87930(pdVar3,DAT_141a03d08,0x80000000,&local_88);
      local_188 = 0x51;
      local_218 = _DAT_141dcb1d8;
      uStack_210 = dRam0000000141dcb1e0;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_218);
      local_188 = 0x52;
      iVar2 = FUN_140e851f0(&local_118,&local_e8,DAT_141955260,0);
      if (iVar2 == 0) {
        local_188 = 0x52;
        pdVar3 = (double *)(**(code **)(*DAT_141ddc8b0 + 8))(DAT_141ddc8b0,DAT_141a03cd8);
        uStack_210 = (double)((ulonglong)uStack_210 & 0xffffffff);
        local_218 = 1.0;
        pdVar4 = &local_218;
        FUN_140e98ef0(param_1,param_2,pdVar3,&local_98,pdVar4);
        uVar13 = (undefined4)((ulonglong)pdVar4 >> 0x20);
        if ((1 << ((byte)((ulonglong)uStack_210 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
      }
      local_188 = 0x53;
      iVar2 = FUN_140e851f0(&local_118,&local_f8,DAT_141955260,0);
      if (iVar2 == 0) {
        local_188 = 0x53;
        pdVar3 = (double *)(**(code **)(*DAT_141ddc8b0 + 8))(DAT_141ddc8b0,DAT_141a03cd8);
        uStack_210 = (double)((ulonglong)uStack_210 & 0xffffffff);
        local_218 = 2.0;
        pdVar4 = &local_218;
        FUN_140e98ef0(param_1,param_2,pdVar3,&local_98,pdVar4);
        uVar13 = (undefined4)((ulonglong)pdVar4 >> 0x20);
        if ((1 << ((byte)((ulonglong)uStack_210 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
      }
      local_188 = 0x55;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      local_180 = &local_a8;
      if (pdVar3 != &local_1d8) {
        local_218 = *pdVar3;
        uStack_210 = pdVar3[1];
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_218);
      }
      local_178 = &local_1d8;
      pdVar3 = (double *)
               FUN_140e634e0(param_1,param_2,&local_208,2,CONCAT44(uVar13,DAT_1419febf8),&local_180)
      ;
      if (pdVar3 != param_3) {
        local_218 = *pdVar3;
        uStack_210 = pdVar3[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_218);
      }
      goto LAB_1400dcba6;
    }
    local_188 = 0x37;
    *param_3 = 0.0;
  }
  *(undefined4 *)local_108 = 0xd;
LAB_1400dcba6:
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(&local_1e8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return param_3;
}

