// gml_Script_SignalSubscribe @ 0x1404a0c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_SignalSubscribe
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  double *pdVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  double dVar10;
  undefined4 uVar12;
  undefined8 uVar11;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  uint local_1e8;
  longlong local_1e0;
  uint uStack_1d4;
  longlong local_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  char *local_198;
  undefined4 local_190;
  longlong local_188;
  byte local_17c;
  longlong local_178;
  byte local_16c;
  undefined8 local_168;
  byte local_15c;
  longlong local_158;
  byte local_14c;
  longlong local_148;
  byte local_13c;
  longlong local_138;
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  longlong local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  longlong local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined1 *local_88;
  longlong *local_80;
  undefined1 *local_78;
  longlong *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined4 local_4c;
  
  plVar7 = (longlong *)0x0;
  local_248 = 0;
  local_198 = "gml_Script_shader_set_wall_blood";
  local_1a0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a0;
  local_190 = 1;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_188,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_1e8 = 0xffffff;
  uStack_1d4 = 0xffffff;
  local_1e0 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_234 = 0;
  local_240 = 0;
  local_224 = 0;
  local_230 = 0;
  local_1a4 = 0;
  local_1b0 = 0;
  local_1b4 = 0;
  local_1c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf1c8) &&
     (_Init_thread_header(&DAT_141ddf1c8), DAT_141ddf1c8 == -1)) {
    DAT_141ddf1c0 = (longlong *)FUN_140e63aa0(DAT_1419fa158);
    _Init_thread_footer(&DAT_141ddf1c8);
  }
  if (DAT_141ddc1a1 == '\0') {
    FUN_140e64380(DAT_141ddf1c0,"gml_Script_shader_set_wall_blood");
    FUN_140e64380(param_1,"gml_Script_shader_set_wall_blood");
  }
  local_190 = 3;
  if (DAT_141ddc1a1 == '\0') {
    DAT_141ddc1a1 = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddf1c0 + 0x10))(DAT_141ddf1c0,DAT_1419fa168);
    FUN_140e609c0(DAT_141ddf1c0);
    uStack_25c = 0xf;
    local_268 = 0x100000800000013;
    if (&local_268 != puVar3) {
      local_258 = 0x100000800000013;
      uStack_250 = uStack_260;
      uStack_24c = 0xf;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_258);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_240);
    }
    local_240 = 0;
    local_238 = 0;
    local_234 = 5;
    plVar4 = (longlong *)(**(code **)(*DAT_141ddf1c0 + 8))(DAT_141ddf1c0,DAT_1419fa168);
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddf1c0 + 0x10))(DAT_141ddf1c0,DAT_1419fa128);
    if (plVar4 != &local_158) {
      local_268 = *plVar4;
      uStack_260 = (undefined4)plVar4[1];
      uStack_25c = *(undefined4 *)((longlong)plVar4 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_268);
    }
    local_a0 = &local_158;
    local_268 = CONCAT44(uRam0000000141dd391c,_DAT_141dd3918);
    uStack_260 = uRam0000000141dd3920;
    uStack_25c = DAT_141dd3924;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_268);
    local_98 = &local_148;
    FUN_140e609c0(DAT_141ddf1c0);
    uVar11 = CONCAT44(uVar12,DAT_141a04778);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_240,2,uVar11,&local_a0);
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if (puVar5 != puVar3) {
      local_268 = *puVar5;
      uStack_260 = *(undefined4 *)(puVar5 + 1);
      uStack_25c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_268);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_230);
    }
    local_230 = 0;
    local_228 = 0;
    local_224 = 5;
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddf1c0 + 0x10))(DAT_141ddf1c0,DAT_1419fa108);
    if (plVar4 != &local_138) {
      local_268 = *plVar4;
      uStack_260 = (undefined4)plVar4[1];
      uStack_25c = *(undefined4 *)((longlong)plVar4 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_268);
    }
    local_90 = &local_138;
    local_268 = CONCAT44(uRam0000000141dd392c,_DAT_141dd3928);
    uStack_260 = uRam0000000141dd3930;
    uStack_25c = DAT_141dd3934;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_268);
    local_88 = local_128;
    FUN_140e609c0(DAT_141ddf1c0);
    uVar11 = CONCAT44(uVar12,DAT_141a04778);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_230,2,uVar11,&local_90);
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if (puVar5 != puVar3) {
      local_268 = *puVar5;
      uStack_260 = *(undefined4 *)(puVar5 + 1);
      uStack_25c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_268);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b0);
    }
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a4 = 5;
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddf1c0 + 0x10))(DAT_141ddf1c0,DAT_1419fa118);
    if (plVar4 != &local_118) {
      local_268 = *plVar4;
      uStack_260 = (undefined4)plVar4[1];
      uStack_25c = *(undefined4 *)((longlong)plVar4 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_268);
    }
    local_80 = &local_118;
    local_268 = CONCAT44(uRam0000000141dd393c,_DAT_141dd3938);
    uStack_260 = uRam0000000141dd3940;
    uStack_25c = DAT_141dd3944;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_268);
    local_78 = local_108;
    FUN_140e609c0(DAT_141ddf1c0);
    uVar11 = CONCAT44(uVar12,DAT_141a04778);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b0,2,uVar11,&local_80);
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if (puVar5 != puVar3) {
      local_268 = *puVar5;
      uStack_260 = *(undefined4 *)(puVar5 + 1);
      uStack_25c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_268);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b4 = 5;
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddf1c0 + 0x10))(DAT_141ddf1c0,DAT_1419fa148);
    if (plVar4 != &local_f8) {
      local_268 = *plVar4;
      uStack_260 = (undefined4)plVar4[1];
      uStack_25c = *(undefined4 *)((longlong)plVar4 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_268);
    }
    local_70 = &local_f8;
    local_268 = CONCAT44(uRam0000000141dd390c,_DAT_141dd3908);
    uStack_260 = uRam0000000141dd3910;
    uStack_25c = DAT_141dd3914;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_268);
    local_68 = local_e8;
    FUN_140e609c0(DAT_141ddf1c0);
    uVar11 = CONCAT44(uVar12,DAT_1419f54d8);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c0,2,uVar11,&local_70);
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if (puVar5 != puVar3) {
      local_268 = *puVar5;
      uStack_260 = *(undefined4 *)(puVar5 + 1);
      uStack_25c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_268);
    }
    FUN_140e60910(1);
  }
  local_190 = 10;
  pdVar6 = (double *)(**(code **)(*DAT_141ddf1c0 + 8))(DAT_141ddf1c0,DAT_1419fa168);
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar6;
  }
  else {
    dVar10 = (double)FUN_140e4b060(pdVar6);
  }
  FUN_140ec9e10((longlong)dVar10);
  local_4c = 0;
  local_58 = 0;
  local_190 = 0xe;
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  local_240 = 0;
  local_238 = 0;
  local_234 = 5;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar2 = FUN_140e4a740(puVar5);
  puVar5 = (undefined8 *)FUN_140ec6010(&local_240,uVar2,0);
  if (puVar5 != &local_1d0) {
    local_268 = *puVar5;
    uStack_260 = *(undefined4 *)(puVar5 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d0);
    }
    FUN_140041b80(&local_1d0,&local_268);
  }
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  local_230 = 0;
  local_228 = 0;
  local_224 = 5;
  if (param_4 < 1) {
    plVar4 = &DAT_1419df7b0;
LAB_1404a14aa:
    local_268 = *plVar4;
    uStack_260 = (undefined4)plVar4[1];
    uStack_25c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_268);
  }
  else {
    plVar4 = (longlong *)*param_5;
    if (plVar4 != &local_188) goto LAB_1404a14aa;
  }
  local_b8 = &local_188;
  local_268 = CONCAT44(uRam0000000141dc6684,_DAT_141dc6680);
  uStack_260 = uRam0000000141dc6688;
  uStack_25c = uRam0000000141dc668c;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_268);
  local_b0 = &local_178;
  uVar11 = CONCAT44(uVar12,DAT_141a04898);
  plVar4 = (longlong *)FUN_140e634e0(param_1,param_2,&local_230,2,uVar11,&local_b8);
  uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
  lVar8 = 0;
  if (plVar4 != &local_1e0) {
    local_268 = *plVar4;
    uStack_260 = (undefined4)plVar4[1];
    uStack_25c = *(undefined4 *)((longlong)plVar4 + 0xc);
    FUN_140041b80(&local_1e0,&local_268);
    local_1e8 = uStack_1d4;
    lVar8 = local_1e0;
  }
  local_190 = 0x10;
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  local_240 = 0;
  local_238 = 0;
  local_234 = 5;
  plVar4 = (longlong *)(**(code **)(*DAT_141ddf1c0 + 8))(DAT_141ddf1c0,DAT_1419fa148);
  if (plVar4 != &local_188) {
    local_268 = *plVar4;
    uStack_260 = (undefined4)plVar4[1];
    uStack_25c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_268);
  }
  local_b8 = &local_188;
  local_b0 = &local_1d0;
  uVar11 = CONCAT44(uVar12,DAT_1419f5468);
  FUN_140e634e0(param_1,param_2,&local_240,2,uVar11,&local_b8);
  uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
  local_190 = 0x12;
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  local_240 = 0;
  local_238 = 0;
  local_234 = 5;
  local_b8 = &local_1d0;
  uVar11 = CONCAT44(uVar12,DAT_141a04658);
  plVar4 = (longlong *)FUN_140e634e0(param_1,param_2,&local_240,1,uVar11,&local_b8);
  uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
  if (plVar4 != &local_1f8) {
    local_268 = *plVar4;
    uStack_260 = (undefined4)plVar4[1];
    uStack_25c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_268);
  }
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  local_230 = 0;
  local_228 = 0;
  local_224 = 5;
  local_b0 = &local_1d0;
  plVar4 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_230,1,CONCAT44(uVar12,DAT_141a04668),&local_b0);
  if (plVar4 != &local_208) {
    local_268 = *plVar4;
    uStack_260 = (undefined4)plVar4[1];
    uStack_25c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_268);
  }
  uStack_24c = local_1ec;
  uStack_250 = local_1f0;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
    local_258 = local_1f8;
  }
  else {
    FUN_1400419b0(&local_258,&local_1f8);
  }
  local_248 = 1;
  uStack_25c = 0;
  local_268 = 0x3fe0000000000000;
  FUN_140042560(&local_258,&local_268);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = local_258;
  uStack_260 = uStack_250;
  uStack_25c = uStack_24c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_268);
  local_248 = 0;
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uStack_24c = local_1fc;
  uStack_250 = local_200;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
    local_258 = local_208;
  }
  else {
    FUN_1400419b0(&local_258,&local_208);
  }
  local_248 = 2;
  uStack_25c = 0;
  local_268 = 0x3fe0000000000000;
  FUN_140042560(&local_258,&local_268);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_218 = (undefined4)local_258;
  uStack_214 = local_258._4_4_;
  uStack_210 = uStack_250;
  uStack_20c = uStack_24c;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_218);
  local_248 = 0;
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_190 = 0x17;
  plVar4 = (longlong *)(**(code **)(*DAT_141ddf1c0 + 8))(DAT_141ddf1c0,DAT_1419fa128);
  if (plVar4 != &local_188) {
    local_218 = (undefined4)*plVar4;
    uStack_214 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_210 = (undefined4)plVar4[1];
    uStack_20c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_218);
  }
  local_b8 = &local_188;
  local_b0 = &local_1f8;
  local_a8 = &local_208;
  FUN_140ec9ea0(3,&local_b8);
  local_190 = 0x18;
  plVar4 = (longlong *)(**(code **)(*DAT_141ddf1c0 + 8))(DAT_141ddf1c0,DAT_1419fa108);
  if (plVar4 != &local_188) {
    local_218 = (undefined4)*plVar4;
    uStack_214 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_210 = (undefined4)plVar4[1];
    uStack_20c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_218);
  }
  uVar1 = local_1e8;
  local_b8 = &local_188;
  plVar4 = (longlong *)0x0;
  uVar9 = local_1e8 & 0xffffff;
  if ((uVar9 == 2) && (lVar8 != 0)) {
    if (*(int *)(lVar8 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
    }
    else {
      plVar4 = *(longlong **)(lVar8 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar4 = &local_1e0;
  }
  uStack_24c = *(undefined4 *)((longlong)plVar4 + 0xc);
  uStack_250 = (undefined4)plVar4[1];
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
    local_258 = *plVar4;
  }
  else {
    FUN_1400419b0(&local_258,plVar4);
  }
  local_248 = 4;
  FUN_1400460e0(&local_258,&local_c8);
  local_218 = (undefined4)local_258;
  uStack_214 = local_258._4_4_;
  uStack_210 = uStack_250;
  uStack_20c = uStack_24c;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_218);
  local_248 = 0;
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_b0 = &local_178;
  plVar4 = (longlong *)0x0;
  if ((uVar9 == 2) && (lVar8 != 0)) {
    if (*(int *)(lVar8 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(lVar8 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar4 = &local_1e0;
  }
  uStack_24c = *(undefined4 *)((longlong)plVar4 + 0xc);
  uStack_250 = (undefined4)plVar4[1];
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
    local_258 = *plVar4;
  }
  else {
    FUN_1400419b0(&local_258,plVar4);
  }
  local_248 = 8;
  FUN_1400460e0(&local_258,&local_d8);
  local_218 = (undefined4)local_258;
  uStack_214 = local_258._4_4_;
  uStack_210 = uStack_250;
  uStack_20c = uStack_24c;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_218);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_a8 = &local_168;
  plVar4 = (longlong *)0x0;
  if ((uVar9 == 2) && (lVar8 != 0)) {
    if (*(int *)(lVar8 + 0x24) < 3) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(lVar8 + 8) + 0x20);
    }
    if (plVar4 != &local_158) goto LAB_1404a1bdb;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar4 = &local_1e0;
LAB_1404a1bdb:
    local_218 = (undefined4)*plVar4;
    uStack_214 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_210 = (undefined4)plVar4[1];
    uStack_20c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_218);
  }
  local_a0 = &local_158;
  if ((uVar9 == 2) && (lVar8 != 0)) {
    if (*(int *)(lVar8 + 0x24) < 4) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",3);
    }
    else {
      plVar7 = (longlong *)(*(longlong *)(lVar8 + 8) + 0x30);
    }
    if (plVar7 != &local_148) goto LAB_1404a1c5c;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar7 = &local_1e0;
LAB_1404a1c5c:
    local_218 = (undefined4)*plVar7;
    uStack_214 = *(undefined4 *)((longlong)plVar7 + 4);
    uStack_210 = (undefined4)plVar7[1];
    uStack_20c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_218);
  }
  local_98 = &local_148;
  FUN_140ec9ea0(5,&local_b8);
  local_190 = 0x19;
  plVar7 = (longlong *)(**(code **)(*DAT_141ddf1c0 + 8))(DAT_141ddf1c0,DAT_1419fa118);
  if (plVar7 != &local_188) {
    local_218 = (undefined4)*plVar7;
    uStack_214 = *(undefined4 *)((longlong)plVar7 + 4);
    uStack_210 = (undefined4)plVar7[1];
    uStack_20c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_218);
  }
  local_b8 = &local_188;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
    if (puVar5 == &local_178) goto LAB_1404a1d52;
  }
  local_218 = *(undefined4 *)puVar5;
  uStack_214 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_210 = *(undefined4 *)(puVar5 + 1);
  uStack_20c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_218);
LAB_1404a1d52:
  local_b0 = &local_178;
  if ((param_4 < 3) || (puVar3 = (undefined8 *)param_5[2], puVar3 != &local_168)) {
    local_218 = *(undefined4 *)puVar3;
    uStack_214 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_210 = *(undefined4 *)(puVar3 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_218);
  }
  local_a8 = &local_168;
  FUN_140ec9ea0(3,&local_b8);
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,0xb,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a0;
  return param_3;
}

