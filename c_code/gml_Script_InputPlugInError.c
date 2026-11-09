// gml_Script_InputPlugInError @ 0x1403583b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputPlugInError
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  double dVar1;
  char cVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong **ppuVar11;
  ulonglong **ppuVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffe50;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  double local_178;
  double dStack_170;
  double local_168;
  undefined4 local_15c;
  double local_158;
  undefined4 local_14c;
  double local_148;
  byte local_13c;
  double local_138;
  byte local_12c;
  double local_128;
  byte local_11c;
  double local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  double local_f8;
  byte local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  double local_d0;
  undefined4 local_c4;
  double *local_b8;
  double *local_b0;
  double *local_a8;
  double *local_a0;
  double *local_98;
  double *local_90;
  undefined1 *local_88;
  ulonglong *local_80;
  double *local_78;
  undefined4 local_6c;
  double local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_e0 = "gml_Script_InputPlugInDefine";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x29;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_168,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0.0;
  uStack_5c = 0xffffff;
  local_68 = 0.0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0.0;
  local_19c = 0;
  local_1a8 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde60c) &&
     (_Init_thread_header(&DAT_141dde60c), DAT_141dde60c == -1)) {
    DAT_141dde610 = (longlong *)FUN_140e63aa0(DAT_1419f30b8);
    _Init_thread_footer(&DAT_141dde60c);
  }
  if (DAT_141ddc124 == '\0') {
    FUN_140e64380(DAT_141dde610,"gml_Script_InputPlugInDefine");
    FUN_140e64380(param_1,"gml_Script_InputPlugInDefine");
  }
  local_d8 = 0x2b;
  if (DAT_141ddc124 == '\0') {
    DAT_141ddc124 = '\x01';
    pdVar4 = (double *)(**(code **)(*DAT_141dde610 + 0x10))(DAT_141dde610,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde610);
    uVar10 = 0;
    pdVar5 = (double *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_1a8,0,0);
    if (pdVar5 != pdVar4) {
      local_198 = *pdVar5;
      uStack_190 = pdVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_198);
    }
    FUN_140e60910(1);
    uVar6 = (**(code **)(*DAT_141dde610 + 8))(DAT_141dde610,DAT_1419fcb48);
    pdVar4 = (double *)(**(code **)(*DAT_141dde610 + 0x10))(DAT_141dde610,DAT_1419f30a8);
    in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419fea28,0x80000000,&local_58,uVar10,in_stack_fffffffffffffe50);
    FUN_140e609c0(DAT_141dde610);
    if (&local_58 != pdVar4) {
      uStack_190 = (double)CONCAT44(uStack_4c,uStack_50);
      local_198 = local_58;
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_198);
    }
    FUN_140e60910(1);
    pdVar4 = (double *)(**(code **)(*DAT_141dde610 + 0x10))(DAT_141dde610,DAT_1419f3088);
    uVar6 = (**(code **)(*DAT_141dde610 + 8))(DAT_141dde610,DAT_1419fcb48);
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_141a02eb8,0x80000000,&local_68,uVar10,
                  in_stack_fffffffffffffe50 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar10 >> 0x20);
    FUN_140e609c0(DAT_141dde610);
    if (&local_68 != pdVar4) {
      uStack_190 = (double)CONCAT44(uStack_5c,uStack_60);
      local_198 = local_68;
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_198);
    }
    FUN_140e60910(1);
  }
  local_d8 = 0x2f;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  dVar1 = DAT_141a729d8;
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 6;
  local_168 = dVar1;
  uVar6 = FUN_140e5c910();
  FUN_140e42c10(uVar6,dVar1);
  iVar3 = DAT_141a02f48;
  local_b8 = &local_168;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_14c = 0;
  local_158 = (double)iVar3;
  local_b0 = &local_158;
  ppuVar12 = (ulonglong **)&local_b8;
  ppuVar11 = (ulonglong **)CONCAT44(uVar9,DAT_141a035d8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_1a8,2,ppuVar11,ppuVar12);
  cVar2 = FUN_140e491e0(uVar6);
  uVar9 = 0;
  if (cVar2 != '\0') {
    local_d8 = 0x31;
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    local_198 = _DAT_141dd12c8;
    uStack_190 = dRam0000000141dd12d0;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_198);
    local_a8 = &local_148;
    ppuVar11 = (ulonglong **)&local_a8;
    FUN_14008e020(param_1,param_2,&local_188,1,ppuVar11);
    uVar9 = local_17c;
  }
  local_d8 = 0x34;
  uVar6 = (**(code **)(*DAT_141dde610 + 8))(DAT_141dde610,DAT_1419fcb48);
  uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419fea08,0x80000000,&local_48,uVar10,
                (ulonglong)ppuVar12 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar10 >> 0x20);
  local_6c = 0;
  local_78 = (double *)0x0;
  iVar3 = FUN_140e851f0(&local_48,&local_78,DAT_141955260,0);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar3 != 0) {
    local_d8 = 0x36;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    local_198 = _DAT_141dd12e8;
    uStack_190 = dRam0000000141dd12f0;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_198);
    local_b8 = &local_168;
    ppuVar12 = (ulonglong **)&local_b8;
    FUN_14008e020(param_1,param_2,&local_1a8,1,ppuVar12);
    uVar13 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
  }
  local_d8 = 0x39;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_78 = (double *)(**(code **)(*DAT_141dde610 + 8))(DAT_141dde610,DAT_1419f3088);
  if (local_78 != &local_168) {
    local_198 = *local_78;
    uStack_190 = local_78[1];
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_198);
  }
  local_b8 = &local_168;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    pdVar4 = (double *)&DAT_1419df7b0;
LAB_1403589f2:
    local_198 = *pdVar4;
    uStack_190 = pdVar4[1];
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_198);
  }
  else {
    pdVar4 = (double *)*param_5;
    if (pdVar4 != &local_158) goto LAB_1403589f2;
  }
  local_b0 = &local_158;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_1a8,2,CONCAT44(uVar13,DAT_1419fcba8),&local_b8);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 != '\0') {
    local_d8 = 0x3b;
    if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    local_198 = _DAT_141dd1328;
    uStack_190 = (double)uRam0000000141dd1330;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_198);
    local_a8 = &local_148;
    if (param_4 < 1) {
      pdVar4 = (double *)&DAT_1419df7b0;
LAB_140358ae2:
      local_198 = *pdVar4;
      uStack_190 = pdVar4[1];
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_198);
    }
    else {
      pdVar4 = (double *)*param_5;
      if (pdVar4 != &local_138) goto LAB_140358ae2;
    }
    local_a0 = &local_138;
    local_198 = _DAT_141dd12d8;
    uStack_190 = dRam0000000141dd12e0;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_198);
    local_98 = &local_128;
    FUN_14008e020(param_1,param_2,&local_188,3,&local_a8);
    uVar9 = local_17c;
  }
  local_d8 = 0x3e;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if (param_4 < 4) {
    pdVar4 = (double *)&DAT_1419df7b0;
LAB_140358bc0:
    local_198 = *pdVar4;
    uStack_190 = pdVar4[1];
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_198);
  }
  else {
    pdVar4 = (double *)param_5[3];
    if (pdVar4 != &local_168) goto LAB_140358bc0;
  }
  local_b8 = &local_168;
  local_198 = _DAT_141dd12f8;
  uStack_190 = dRam0000000141dd1300;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_198);
  local_b0 = &local_158;
  ppuVar12 = (ulonglong **)&local_b8;
  uVar6 = FUN_14006e740(param_1,param_2,&local_1a8,2,ppuVar12);
  uVar13 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_d8 = 0x40;
    if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    local_198 = _DAT_141dd1308;
    uStack_190 = (double)uRam0000000141dd1310;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_198);
    local_a8 = &local_148;
    if (param_4 < 1) {
      pdVar4 = (double *)&DAT_1419df7b0;
LAB_140358ce3:
      local_198 = *pdVar4;
      uStack_190 = pdVar4[1];
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_198);
    }
    else {
      pdVar4 = (double *)*param_5;
      if (pdVar4 != &local_138) goto LAB_140358ce3;
    }
    local_a0 = &local_138;
    local_198 = _DAT_141dd1338;
    uStack_190 = (double)uRam0000000141dd1340;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_198);
    local_98 = &local_128;
    local_198 = _DAT_141dd12f8;
    uStack_190 = dRam0000000141dd1300;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_198);
    local_90 = &local_118;
    local_198 = _DAT_141dd1318;
    uStack_190 = dRam0000000141dd1320;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_198);
    local_88 = local_108;
    if (param_4 < 4) {
      pdVar4 = (double *)&DAT_1419df7b0;
LAB_140358ddb:
      local_198 = *pdVar4;
      uStack_190 = pdVar4[1];
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_198);
    }
    else {
      pdVar4 = (double *)param_5[3];
      if (pdVar4 != &local_f8) goto LAB_140358ddb;
    }
    local_80 = (ulonglong *)&local_f8;
    ppuVar12 = (ulonglong **)&local_a8;
    FUN_14008e020(param_1,param_2,&local_188,6,ppuVar12);
    uVar13 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
    uVar9 = local_17c;
  }
  local_d8 = 0x43;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uVar7 = (int)(DAT_1419fda28 | 0x5000000) >> 0x18 & 0xff;
  if (uVar7 == 0xf) {
    uVar10 = 0x4000004;
  }
  else {
    uVar10 = (ulonglong)(uVar7 | 0x1000000);
  }
  uStack_190 = (double)CONCAT44(0xf,(undefined4)uStack_190);
  local_198 = (double)(uVar10 << 0x20 | (ulonglong)(DAT_1419fda28 & 0xffffff));
  dStack_170 = uStack_190;
  local_178 = local_198;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_178);
  local_b8 = &local_168;
  if (param_4 < 1) {
    pdVar4 = (double *)&DAT_1419df7b0;
LAB_140358ef9:
    local_178 = *pdVar4;
    dStack_170 = pdVar4[1];
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_178);
  }
  else {
    pdVar4 = (double *)*param_5;
    if (pdVar4 != &local_158) goto LAB_140358ef9;
  }
  local_b0 = &local_158;
  if (param_4 < 2) {
    pdVar4 = (double *)&DAT_1419df7b0;
LAB_140358f46:
    local_178 = *pdVar4;
    dStack_170 = pdVar4[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  else {
    pdVar4 = (double *)param_5[1];
    if (pdVar4 != &local_148) goto LAB_140358f46;
  }
  local_a8 = &local_148;
  if (param_4 < 3) {
    pdVar4 = (double *)&DAT_1419df7b0;
LAB_140358f93:
    local_178 = *pdVar4;
    dStack_170 = pdVar4[1];
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
  }
  else {
    pdVar4 = (double *)param_5[2];
    if (pdVar4 != &local_138) goto LAB_140358f93;
  }
  local_a0 = &local_138;
  if (param_4 < 4) {
    pdVar4 = (double *)&DAT_1419df7b0;
LAB_140358fe0:
    local_178 = *pdVar4;
    dStack_170 = pdVar4[1];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  else {
    pdVar4 = (double *)param_5[3];
    if (pdVar4 != &local_128) goto LAB_140358fe0;
  }
  local_98 = &local_128;
  if (param_4 < 5) {
    pdVar4 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar4 = (double *)param_5[4];
    if (pdVar4 == &local_118) goto LAB_14035905a;
  }
  local_178 = *pdVar4;
  dStack_170 = pdVar4[1];
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_178);
LAB_14035905a:
  local_90 = &local_118;
  uVar6 = CONCAT44(uVar13,DAT_1419fd6d8);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_1a8,6,uVar6,&local_b8);
  uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (pdVar4 != &local_d0) {
    local_178 = *pdVar4;
    dStack_170 = pdVar4[1];
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    FUN_140041b80(&local_d0,&local_178);
  }
  local_d8 = 0x45;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  pdVar4 = (double *)(**(code **)(*DAT_141dde610 + 8))(DAT_141dde610,DAT_1419f30a8);
  if (pdVar4 != &local_168) {
    local_178 = *pdVar4;
    dStack_170 = pdVar4[1];
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_178);
  }
  local_b8 = &local_168;
  local_b0 = &local_d0;
  FUN_140e634e0(param_1,param_2,&local_1a8,2,CONCAT44(uVar13,DAT_1419fe568),&local_b8);
  local_d8 = 0x46;
  if (0 < param_4) {
    puVar8 = (undefined8 *)*param_5;
  }
  FUN_140e98ef0(param_1,param_2,local_78,puVar8,&local_d0);
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

