// gml_Script_InputVibrateCurve @ 0x140380600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputVibrateCurve
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint *puVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong uVar14;
  uint **ppuVar15;
  ulonglong in_stack_fffffffffffffe50;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  ulonglong local_188;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  uint local_168 [4];
  uint local_158 [4];
  uint local_148 [4];
  uint local_138 [4];
  uint local_128 [4];
  uint local_118 [4];
  uint local_108 [4];
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  uint *local_d0;
  uint *local_c8;
  uint *local_c0;
  uint *local_b8;
  uint *local_b0;
  uint *local_a8;
  uint *local_a0;
  undefined8 local_98;
  uint uStack_90;
  uint uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_f0 = "gml_Script_InputVibrateConstant";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0xd;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_88,param_4,5,param_5);
  uVar13 = 1;
  _eh_vector_constructor_iterator_(local_168,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_18c = 0;
  local_198 = 0;
  local_16c = 0;
  local_178 = 0;
  local_d4 = 0;
  local_e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde8b0) &&
     (_Init_thread_header(&DAT_141dde8b0), DAT_141dde8b0 == -1)) {
    DAT_141dde8b8 = (longlong *)FUN_140e63aa0(DAT_1419f4138);
    _Init_thread_footer(&DAT_141dde8b0);
  }
  local_e8 = 0xd;
  uVar12 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[3];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_e8 = 0xd;
    if ((int)local_88[0] < 4) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_80[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if ((int)local_88[0] < 5) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[4];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    uStack_17c = 0xd;
    local_188 = 0;
    if ((int)local_88[0] < 5) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (ulonglong *)local_80[4];
      if (&local_188 == puVar11) goto LAB_140380812;
    }
    local_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = uStack_180;
    uStack_19c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_1a8);
  }
LAB_140380812:
  if (DAT_141ddc154 == '\0') {
    FUN_140e64380(DAT_141dde8b8,"gml_Script_InputVibrateConstant");
    FUN_140e64380(local_res8,"gml_Script_InputVibrateConstant");
  }
  local_e8 = 0xf;
  if (DAT_141ddc154 == '\0') {
    DAT_141ddc154 = '\x01';
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde8b8 + 0x10))(DAT_141dde8b8,DAT_141a026b8);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uVar14 = 0;
    uVar7 = FUN_1400ebd30(local_res8,local_res10,&local_198,0,0);
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_1419fed38,0x80000000,&local_98,uVar14,
                  in_stack_fffffffffffffe50 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar14 >> 0x20);
    FUN_140e609c0(DAT_141dde8b8);
    if (&local_98 != puVar6) {
      local_1a8 = (uint)local_98;
      uStack_1a4 = local_98._4_4_;
      uStack_1a0 = uStack_90;
      uStack_19c = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1a8);
    }
    FUN_140e60910(1);
  }
  local_e8 = 4;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if ((int)local_88[0] < 4) {
    puVar8 = (uint *)&DAT_1419df7b0;
LAB_140380983:
    local_1a8 = *puVar8;
    uStack_1a4 = puVar8[1];
    uStack_1a0 = puVar8[2];
    uStack_19c = puVar8[3];
    if ((1 << ((byte)local_168[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1a8);
  }
  else {
    puVar8 = (uint *)local_80[3];
    if (puVar8 != local_168) goto LAB_140380983;
  }
  local_d0 = local_168;
  ppuVar15 = (uint **)CONCAT44(uVar13,DAT_141a014a8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_198,1,ppuVar15,&local_d0);
  cVar3 = FUN_140e491e0(uVar7);
  uVar13 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
  if (cVar3 == '\0') {
    local_e8 = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 5;
    if ((int)local_88[0] < 4) {
      puVar8 = (uint *)&DAT_1419df7b0;
LAB_140380a75:
      local_1a8 = *puVar8;
      uStack_1a4 = puVar8[1];
      uStack_1a0 = puVar8[2];
      uStack_19c = puVar8[3];
      if ((1 << ((byte)local_158[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1a8);
    }
    else {
      puVar8 = (uint *)local_80[3];
      if (puVar8 != local_158) goto LAB_140380a75;
    }
    local_c8 = local_158;
    local_1a8 = _DAT_141dd1f48;
    uStack_1a4 = uRam0000000141dd1f4c;
    uStack_1a0 = uRam0000000141dd1f50;
    uStack_19c = DAT_141dd1f54;
    if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1a8);
    local_c0 = local_148;
    puVar8 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_e0,1,CONCAT44(uVar13,DAT_1419fdc58)
                                   ,&local_c8);
    if (puVar8 != local_138) {
      local_1a8 = *puVar8;
      uStack_1a4 = puVar8[1];
      uStack_1a0 = puVar8[2];
      uStack_19c = puVar8[3];
      if ((1 << ((byte)local_138[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_1a8);
    }
    local_b8 = local_138;
    local_1a8 = _DAT_141dd1f88;
    uStack_1a4 = uRam0000000141dd1f8c;
    uStack_1a0 = uRam0000000141dd1f90;
    uStack_19c = DAT_141dd1f94;
    if ((1 << ((byte)local_128[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1a8);
    local_b0 = local_128;
    ppuVar15 = &local_c0;
    FUN_14008e020(local_res8,local_res10,&local_178,3,ppuVar15);
  }
  local_e8 = 0xd;
  if ((int)local_88[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[3];
  }
  uStack_17c = 0;
  local_188 = 0x3ff0000000000000;
  uVar5 = FUN_140e851f0(puVar6,&local_188,DAT_141955260,1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (uVar5 < 0x80000000) {
    local_e8 = 0xf;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_1a8 = _DAT_141dd1f78;
    uStack_1a4 = uRam0000000141dd1f7c;
    uStack_1a0 = uRam0000000141dd1f80;
    uStack_19c = DAT_141dd1f84;
    if ((1 << ((byte)local_168[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1a8);
    local_d0 = local_168;
    if ((int)local_88[0] < 4) {
      puVar8 = (uint *)&DAT_1419df7b0;
LAB_140380cb9:
      local_1a8 = *puVar8;
      uStack_1a4 = puVar8[1];
      uStack_1a0 = puVar8[2];
      uStack_19c = puVar8[3];
      if ((1 << ((byte)local_158[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1a8);
    }
    else {
      puVar8 = (uint *)local_80[3];
      if (puVar8 != local_158) goto LAB_140380cb9;
    }
    local_c8 = local_158;
    local_1a8 = _DAT_141dd1f58;
    uStack_1a4 = uRam0000000141dd1f5c;
    uStack_1a0 = uRam0000000141dd1f60;
    uStack_19c = DAT_141dd1f64;
    if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1a8);
    local_c0 = local_148;
    local_1a8 = _DAT_1419e45e0;
    uStack_1a4 = uRam00000001419e45e4;
    uStack_1a0 = uRam00000001419e45e8;
    uStack_19c = uRam00000001419e45ec;
    if ((1 << ((byte)local_138[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1a8);
    local_b8 = local_138;
    local_1a8 = _DAT_141dd1f98;
    uStack_1a4 = uRam0000000141dd1f9c;
    uStack_1a0 = uRam0000000141dd1fa0;
    uStack_19c = DAT_141dd1fa4;
    if ((1 << ((byte)local_128[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1a8);
    local_b0 = local_128;
    ppuVar15 = &local_d0;
    FUN_14008e020(local_res8,local_res10,&local_198,5,ppuVar15);
  }
  local_e8 = 0x17;
  if ((int)local_88[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[3];
  }
  uStack_17c = 0;
  local_188 = 0;
  iVar4 = FUN_140e851f0(puVar6,&local_188,DAT_141955260,1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (iVar4 != -2 && iVar4 < 0) {
    local_e8 = 0x1b;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_1a8 = _DAT_141dd1f78;
    uStack_1a4 = uRam0000000141dd1f7c;
    uStack_1a0 = uRam0000000141dd1f80;
    uStack_19c = DAT_141dd1f84;
    if ((1 << ((byte)local_168[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1a8);
    local_d0 = local_168;
    if ((int)local_88[0] < 4) {
      puVar8 = (uint *)&DAT_1419df7b0;
LAB_140380ec0:
      local_1a8 = *puVar8;
      uStack_1a4 = puVar8[1];
      uStack_1a0 = puVar8[2];
      uStack_19c = puVar8[3];
      if ((1 << ((byte)local_158[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1a8);
    }
    else {
      puVar8 = (uint *)local_80[3];
      if (puVar8 != local_158) goto LAB_140380ec0;
    }
    local_c8 = local_158;
    local_1a8 = _DAT_141dd1f68;
    uStack_1a4 = uRam0000000141dd1f6c;
    uStack_1a0 = uRam0000000141dd1f70;
    uStack_19c = DAT_141dd1f74;
    if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1a8);
    local_c0 = local_148;
    ppuVar15 = &local_d0;
    FUN_14008e020(local_res8,local_res10,&local_198,3,ppuVar15);
  }
  local_e8 = 0x13;
  if ((int)local_88[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_80;
  }
  if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*puVar6;
  }
  else {
    uVar13 = FUN_140e4b060();
  }
  if ((int)local_88[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_80;
  }
  uVar7 = FUN_140e78ec0(uVar13,0,0x3ff0000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = uVar7;
  local_e8 = 0x14;
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
  }
  if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*puVar6;
  }
  else {
    uVar13 = FUN_140e4b060();
  }
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
  }
  uVar7 = FUN_140e78ec0(uVar13,&DAT_bff0000000000000,0x3ff0000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = uVar7;
  local_e8 = 0x15;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if ((int)local_88[0] < 3) {
    puVar8 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar8 = (uint *)local_80[2];
    if (puVar8 == local_168) goto LAB_1403810a8;
  }
  local_1a8 = *puVar8;
  uStack_1a4 = puVar8[1];
  uStack_1a0 = puVar8[2];
  uStack_19c = puVar8[3];
  if ((1 << ((byte)local_168[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_1a8);
LAB_1403810a8:
  local_d0 = local_168;
  local_1a8 = _DAT_141dc64d0;
  uStack_1a4 = uRam0000000141dc64d4;
  uStack_1a0 = uRam0000000141dc64d8;
  uStack_19c = uRam0000000141dc64dc;
  if ((1 << ((byte)local_158[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1a8);
  local_c8 = local_158;
  if ((int)local_88[0] < 3) {
    puVar8 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar8 = (uint *)local_80[2];
  }
  puVar9 = (uint *)FUN_140e79090(&local_198,2,&local_d0);
  if (puVar9 != puVar8) {
    local_1a8 = *puVar9;
    uStack_1a4 = puVar9[1];
    uStack_1a0 = puVar9[2];
    uStack_19c = puVar9[3];
    if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_1a8);
  }
  local_e8 = 0x17;
  plVar10 = (longlong *)(**(code **)(*DAT_141dde8b8 + 8))(DAT_141dde8b8,DAT_141a026b8);
  if ((int)local_88[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[3];
  }
  iVar4 = FUN_140e4a740(puVar6);
  if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar4 = FUN_140e63cb0(local_78,&local_res8,&local_res10,plVar10);
  if (0 < iVar4) {
    do {
      local_e8 = 0x19;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03d88);
      cVar3 = FUN_140e491e0(uVar7);
      uVar13 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
      if (cVar3 == '\0') {
LAB_140381231:
        local_e8 = 0x1b;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        puVar8 = (uint *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04338);
        local_1a8 = DAT_141a041e8 & 0xffffff;
        uStack_1a4 = (int)(DAT_141a041e8 | 0x5000000) >> 0x18 & 0xff;
        if (uStack_1a4 == 0xf) {
          uStack_1a4 = 0x4000004;
        }
        else {
          uStack_1a4 = uStack_1a4 | 0x1000000;
        }
        uStack_17c = 0xf;
        local_188 = CONCAT44(uStack_1a4,DAT_141a041e8) & 0xffffffff00ffffff;
        uStack_1a0 = uStack_180;
        uStack_19c = 0xf;
        if ((1 << ((byte)local_168[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_1a8);
        local_d0 = local_168;
        if ((int)local_88[0] < 1) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_140381344:
          local_1a8 = *puVar9;
          uStack_1a4 = puVar9[1];
          uStack_1a0 = puVar9[2];
          uStack_19c = puVar9[3];
          if ((1 << ((byte)local_158[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_158);
          }
          FUN_140041b80(local_158,&local_1a8);
        }
        else {
          puVar9 = (uint *)*local_80;
          if (puVar9 != local_158) goto LAB_140381344;
        }
        local_c8 = local_158;
        if ((int)local_88[0] < 2) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_140381393:
          local_1a8 = *puVar9;
          uStack_1a4 = puVar9[1];
          uStack_1a0 = puVar9[2];
          uStack_19c = puVar9[3];
          if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_148);
          }
          FUN_140041b80(local_148,&local_1a8);
        }
        else {
          puVar9 = (uint *)local_80[1];
          if (puVar9 != local_148) goto LAB_140381393;
        }
        local_c0 = local_148;
        if ((int)local_88[0] < 3) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_1403813e2:
          local_1a8 = *puVar9;
          uStack_1a4 = puVar9[1];
          uStack_1a0 = puVar9[2];
          uStack_19c = puVar9[3];
          if ((1 << ((byte)local_138[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_1a8);
        }
        else {
          puVar9 = (uint *)local_80[2];
          if (puVar9 != local_138) goto LAB_1403813e2;
        }
        local_b8 = local_138;
        if ((int)local_88[0] < 5) {
          puVar9 = (uint *)&DAT_1419df7b0;
LAB_140381431:
          local_1a8 = *puVar9;
          uStack_1a4 = puVar9[1];
          uStack_1a0 = puVar9[2];
          uStack_19c = puVar9[3];
          if ((1 << ((byte)local_128[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_128);
          }
          FUN_140041b80(local_128,&local_1a8);
        }
        else {
          puVar9 = (uint *)local_80[4];
          if (puVar9 != local_128) goto LAB_140381431;
        }
        local_b0 = local_128;
        if (puVar8 != local_118) {
          local_1a8 = *puVar8;
          uStack_1a4 = puVar8[1];
          uStack_1a0 = puVar8[2];
          uStack_19c = puVar8[3];
          if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_118);
          }
          FUN_140041b80(local_118,&local_1a8);
        }
        local_a8 = local_118;
        uVar7 = CONCAT44(uVar13,DAT_1419fd6d8);
        puVar8 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_178,5,uVar7,&local_d0);
        uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if (puVar8 != local_108) {
          local_1a8 = *puVar8;
          uStack_1a4 = puVar8[1];
          uStack_1a0 = puVar8[2];
          uStack_19c = puVar8[3];
          if ((1 << ((byte)local_108[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_1a8);
        }
        local_a0 = local_108;
        ppuVar15 = (uint **)CONCAT44(uVar13,DAT_1419fe568);
        FUN_140e634e0(local_res8,local_res10,&local_198,2,ppuVar15,&local_a8);
      }
      else {
        if ((int)local_88[0] < 5) {
          puVar6 = &DAT_1419df7b0;
        }
        else {
          puVar6 = (undefined8 *)local_80[4];
        }
        cVar3 = FUN_140e491e0(puVar6);
        uVar13 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
        if (cVar3 != '\0') goto LAB_140381231;
      }
      cVar3 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar3 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_168,0x10,7,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar6 = local_80;
    do {
      puVar2 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

