// gml_Script_InputPlugInDefine @ 0x140357700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputPlugInDefine
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  byte bVar7;
  uint uVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  ulonglong in_stack_fffffffffffffdf0;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined4 local_190 [3];
  undefined4 local_184;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168 [2];
  undefined8 local_158 [2];
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  bVar7 = 0;
  local_1b0 = "gml_Script_InputPlugInAssertDependencies";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1a8 = 0xc;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_168,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_1ec = 0;
  uVar8 = 0;
  local_1f8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_bc = 0;
  local_c8 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde608) &&
     (_Init_thread_header(&DAT_141dde608), DAT_141dde608 == -1)) {
    DAT_141dde600 = (longlong *)FUN_140e63aa0(DAT_1419f3068);
    _Init_thread_footer(&DAT_141dde608);
  }
  if (DAT_141ddc123 == '\0') {
    FUN_140e64380(DAT_141dde600,"gml_Script_InputPlugInAssertDependencies");
    FUN_140e64380(param_1,"gml_Script_InputPlugInAssertDependencies");
  }
  local_1a8 = 0xe;
  if (DAT_141ddc123 == '\0') {
    DAT_141ddc123 = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141dde600 + 0x10))(DAT_141dde600,DAT_1419f3088);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    uVar10 = 0;
    uVar4 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_1f8,0,0);
    pcVar9 = (code *)(uVar10 & 0xffffffffffffff00);
    FUN_140e87440(uVar4,DAT_141a02eb8,0x80000000,&local_d8,pcVar9,
                  in_stack_fffffffffffffdf0 & 0xffffffffffffff00);
    FUN_140e609c0(DAT_141dde600);
    if (&local_d8 != puVar3) {
      uStack_b0 = CONCAT44(uStack_cc,uStack_d0);
      local_b8 = local_d8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_b8);
    }
    FUN_140e60910(1);
  }
  local_1a8 = 0x10;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1dc = 0;
  local_1e8 = 0;
  local_1a8 = 0x11;
  uVar4 = FUN_14018a720(&local_b8,&local_c8,2);
  lVar5 = FUN_140e4a8b0(uVar4);
  if ((1 << ((byte)((ulonglong)uStack_b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (0 < lVar5) {
    puVar3 = &DAT_1419df7b0;
    do {
      uVar11 = (undefined4)((ulonglong)pcVar9 >> 0x20);
      lVar5 = lVar5 + -1;
      local_1a8 = 0x13;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      puVar6 = (undefined8 *)(**(code **)(*DAT_141dde600 + 8))(DAT_141dde600,DAT_1419f3088);
      if (puVar6 != local_168) {
        local_208 = *puVar6;
        uStack_200 = puVar6[1];
        if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_208);
      }
      local_a8 = local_168;
      iVar2 = FUN_140e4a740(&local_1e8);
      if (iVar2 < param_4) {
        puVar6 = *(undefined8 **)(param_5 + (longlong)iVar2 * 8);
        if (puVar6 != local_158) goto LAB_140357a8b;
      }
      else {
        puVar6 = &DAT_1419df7b0;
LAB_140357a8b:
        local_208 = *puVar6;
        uStack_200 = puVar6[1];
        if ((1 << ((byte)local_158[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_208);
      }
      local_a0 = local_158;
      uVar4 = CONCAT44(uVar11,DAT_141a01138);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1f8,2,uVar4,&local_a8);
      uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (puVar6 != &local_1a0) {
        local_208 = *puVar6;
        uStack_200 = puVar6[1];
        if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a0);
        }
        FUN_140041b80(&local_1a0,&local_208);
      }
      local_1a8 = 0x15;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      local_a8 = &local_1a0;
      ppuVar12 = &local_a8;
      uVar10 = CONCAT44(uVar11,DAT_1419fcb88);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar10,ppuVar12);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        local_1a8 = 0x17;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        local_208 = _DAT_141dd12a8;
        uStack_200 = uRam0000000141dd12b0;
        if ((1 << ((byte)local_158[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_208);
        local_a0 = local_158;
        iVar2 = FUN_140e4a740(&local_1e8);
        if ((param_4 <= iVar2) ||
           (puVar3 = *(undefined8 **)(param_5 + (longlong)iVar2 * 8), puVar3 != &local_148)) {
          local_208 = *puVar3;
          uStack_200 = puVar3[1];
          if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          FUN_140041b80(&local_148,&local_208);
        }
        local_98 = &local_148;
        local_208 = _DAT_141dd1288;
        uStack_200 = uRam0000000141dd1290;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_208);
        local_90 = &local_138;
        FUN_14008e020(param_1,param_2,&local_1c8,3,&local_a0);
        local_1a8 = 0x18;
        *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
        bVar7 = (byte)local_1bc;
        goto LAB_140357da1;
      }
      local_1a8 = 0x1b;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
      FUN_140e87440(&local_1a0,DAT_1419fd9f8,0x80000000,&local_178,uVar10 & 0xffffffffffffff00,
                    uVar13);
      local_1cc = local_1dc;
      local_1d0 = local_1e0;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
        local_1d8 = local_1e8;
      }
      else {
        FUN_1400419b0(&local_1d8,&local_1e8);
      }
      local_184 = 7;
      local_190[0] = 1;
      FUN_1400460e0(&local_1d8,local_190);
      if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_190);
      }
      iVar2 = FUN_140e4a740(&local_1d8);
      if (iVar2 < param_4) {
        puVar6 = *(undefined8 **)(param_5 + (longlong)iVar2 * 8);
        if (puVar6 != local_168) goto LAB_140357c94;
      }
      else {
        puVar6 = &DAT_1419df7b0;
LAB_140357c94:
        local_208 = *puVar6;
        uStack_200 = puVar6[1];
        if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_208);
      }
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_a8 = local_168;
      uStack_200 = CONCAT44(uStack_16c,uStack_170);
      local_208 = local_178;
      if ((1 << ((byte)local_158[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_208);
      local_a0 = local_158;
      pcVar9 = (code *)&local_a8;
      uVar4 = FUN_14006e740(param_1,param_2,&local_1f8,2,pcVar9);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        local_1a8 = 0x1d;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        FUN_140e87440(&local_1a0,DAT_1419fd9f8,0x80000000,&local_178,
                      (ulonglong)pcVar9 & 0xffffffffffffff00,uVar13 & 0xffffffffffffff00);
        local_208 = _DAT_141dd12b8;
        uStack_200 = uRam0000000141dd12c0;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_208);
        local_98 = &local_148;
        local_1cc = local_1dc;
        local_1d0 = local_1e0;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
          local_1d8 = local_1e8;
        }
        else {
          FUN_1400419b0(&local_1d8,&local_1e8);
        }
        local_184 = 7;
        local_190[0] = 1;
        FUN_1400460e0(&local_1d8,local_190);
        if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_190);
        }
        iVar2 = FUN_140e4a740(&local_1d8);
        if (iVar2 < param_4) {
          puVar6 = *(undefined8 **)(param_5 + (longlong)iVar2 * 8);
          if (puVar6 != &local_138) goto LAB_140357fa0;
        }
        else {
          puVar6 = &DAT_1419df7b0;
LAB_140357fa0:
          local_208 = *puVar6;
          uStack_200 = puVar6[1];
          if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140041b80(&local_138,&local_208);
        }
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_208 = _DAT_141dd1278;
        uStack_200 = uRam0000000141dd1280;
        local_90 = &local_138;
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_208);
        local_88 = local_128;
        iVar2 = FUN_140e4a740(&local_1e8);
        if ((param_4 <= iVar2) ||
           (puVar3 = *(undefined8 **)(param_5 + (longlong)iVar2 * 8), puVar3 != &local_118)) {
          local_208 = *puVar3;
          uStack_200 = puVar3[1];
          if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_208);
        }
        local_80 = &local_118;
        local_208 = _DAT_141dd1268;
        uStack_200 = uRam0000000141dd1270;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_208);
        local_78 = local_108;
        uStack_200 = CONCAT44(uStack_16c,uStack_170);
        local_208 = local_178;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_208);
        local_70 = local_f8;
        local_208 = _DAT_141dd1298;
        uStack_200 = uRam0000000141dd12a0;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_208);
        local_68 = local_e8;
        FUN_14008e020(param_1,param_2,&local_1c8,7,&local_98);
        local_1a8 = 0x1e;
        *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
        bVar7 = (byte)local_1bc;
        goto LAB_140357da1;
      }
      local_1a8 = 0x21;
      FUN_140162d40(&local_1e8,2);
    } while (0 < lVar5);
  }
  local_1a8 = 0x24;
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  uVar8 = 0x3ff00000;
LAB_140357da1:
  *param_3 = (ulonglong)uVar8 << 0x20;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << (bVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_168,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return param_3;
}

