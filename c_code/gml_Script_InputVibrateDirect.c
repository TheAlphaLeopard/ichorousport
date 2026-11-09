// gml_Script_InputVibrateDirect @ 0x1403817a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputVibrateDirect
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  longlong *plVar8;
  uint *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong uVar14;
  undefined1 **ppuVar15;
  ulonglong in_stack_fffffffffffffe20;
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  uint local_178 [4];
  undefined1 local_168 [16];
  uint local_158 [4];
  uint local_148 [4];
  uint local_138 [4];
  uint local_128 [4];
  uint local_118 [4];
  uint local_108 [4];
  uint local_f8 [4];
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  ulonglong local_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  uint *local_c8;
  undefined1 *local_c0;
  uint *local_b8;
  uint *local_b0;
  uint *local_a8;
  uint *local_a0;
  uint *local_98;
  uint *local_90;
  uint *local_88;
  uint local_78 [2];
  undefined8 *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_1a0 = "gml_Script_InputVibrateCurve";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0x10;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_78,param_4,6,param_5);
  uVar13 = 1;
  _eh_vector_constructor_iterator_(local_178,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_184 = 0;
  local_190 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde8c0) &&
     (_Init_thread_header(&DAT_141dde8c0), DAT_141dde8c0 == -1)) {
    DAT_141dde8c8 = (longlong *)FUN_140e63aa0(DAT_1419f4178);
    _Init_thread_footer(&DAT_141dde8c0);
  }
  local_198 = 0x10;
  uVar11 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_70[4];
  }
  iVar4 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_198 = 0x10;
    if ((int)local_78[0] < 5) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_70[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if ((int)local_78[0] < 6) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_70[5];
  }
  iVar4 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    uStack_cc = 0xd;
    local_d8 = 0;
    if ((int)local_78[0] < 6) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (ulonglong *)local_70[5];
      if (&local_d8 == puVar10) goto LAB_1403819b9;
    }
    local_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1d0 = uStack_d0;
    uStack_1cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_1d8);
  }
LAB_1403819b9:
  if (DAT_141ddc155 == '\0') {
    FUN_140e64380(DAT_141dde8c8,"gml_Script_InputVibrateCurve");
    FUN_140e64380(local_res8,"gml_Script_InputVibrateCurve");
  }
  local_198 = 0x12;
  if (DAT_141ddc155 == '\0') {
    DAT_141ddc155 = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde8c8 + 0x10))(DAT_141dde8c8,DAT_141a026b8);
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar14 = 0;
    uVar6 = FUN_1400ebd30(local_res8,local_res10,&local_1c8,0,0);
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419fed38,0x80000000,&local_e8,uVar14,
                  in_stack_fffffffffffffe20 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar14 >> 0x20);
    FUN_140e609c0(DAT_141dde8c8);
    if (&local_e8 != puVar5) {
      local_1d8 = (uint)local_e8;
      uStack_1d4 = local_e8._4_4_;
      uStack_1d0 = uStack_e0;
      uStack_1cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_1d8);
    }
    FUN_140e60910(1);
  }
  local_198 = 0x14;
  if ((int)local_78[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_70;
  }
  if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
    uVar12 = (undefined4)*puVar5;
  }
  else {
    uVar12 = FUN_140e4b060();
  }
  if ((int)local_78[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_70;
  }
  uVar6 = FUN_140e78ec0(uVar12,0,0x3ff0000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = uVar6;
  local_198 = 0x15;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  if ((int)local_78[0] < 2) {
    puVar9 = (uint *)&DAT_1419df7b0;
LAB_140381b93:
    local_1d8 = *puVar9;
    uStack_1d4 = puVar9[1];
    uStack_1d0 = puVar9[2];
    uStack_1cc = puVar9[3];
    if ((1 << ((byte)local_178[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1d8);
  }
  else {
    puVar9 = (uint *)local_70[1];
    if (puVar9 != local_178) goto LAB_140381b93;
  }
  local_c8 = local_178;
  ppuVar15 = (undefined1 **)CONCAT44(uVar13,DAT_1419f4158);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_1c8,1,ppuVar15,&local_c8);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    local_198 = 0x15;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    local_1d8 = _DAT_141dd1fb8;
    uStack_1d4 = uRam0000000141dd1fbc;
    uStack_1d0 = uRam0000000141dd1fc0;
    uStack_1cc = DAT_141dd1fc4;
    if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1d8);
    local_c0 = local_168;
    if ((int)local_78[0] < 2) {
      puVar9 = (uint *)&DAT_1419df7b0;
LAB_140381c95:
      local_1d8 = *puVar9;
      uStack_1d4 = puVar9[1];
      uStack_1d0 = puVar9[2];
      uStack_1cc = puVar9[3];
      if ((1 << ((byte)local_158[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1d8);
    }
    else {
      puVar9 = (uint *)local_70[1];
      if (puVar9 != local_158) goto LAB_140381c95;
    }
    local_b8 = local_158;
    local_1d8 = _DAT_141dd1fa8;
    uStack_1d4 = uRam0000000141dd1fac;
    uStack_1d0 = uRam0000000141dd1fb0;
    uStack_1cc = DAT_141dd1fb4;
    if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1d8);
    local_b0 = local_148;
    ppuVar15 = &local_c0;
    FUN_14008e020(local_res8,local_res10,&local_1b8,3,ppuVar15);
  }
  local_198 = 0x16;
  if ((int)local_78[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_70[2];
  }
  if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*puVar5;
  }
  else {
    uVar13 = FUN_140e4b060();
  }
  if ((int)local_78[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_70[2];
  }
  uVar6 = FUN_140e78ec0(uVar13,&DAT_bff0000000000000,0x3ff0000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = uVar6;
  local_198 = 0x17;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  if ((int)local_78[0] < 4) {
    puVar9 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar9 = (uint *)local_70[3];
    if (puVar9 == local_178) goto LAB_140381e1e;
  }
  local_1d8 = *puVar9;
  uStack_1d4 = puVar9[1];
  uStack_1d0 = puVar9[2];
  uStack_1cc = puVar9[3];
  if ((1 << ((byte)local_178[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1d8);
LAB_140381e1e:
  local_c8 = local_178;
  local_1d8 = _DAT_141dc64e0;
  uStack_1d4 = uRam0000000141dc64e4;
  uStack_1d0 = uRam0000000141dc64e8;
  uStack_1cc = uRam0000000141dc64ec;
  if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_1d8);
  local_c0 = local_168;
  if ((int)local_78[0] < 4) {
    puVar9 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar9 = (uint *)local_70[3];
  }
  puVar7 = (uint *)FUN_140e79090(&local_1c8,2,&local_c8);
  if (puVar7 != puVar9) {
    local_1d8 = *puVar7;
    uStack_1d4 = puVar7[1];
    uStack_1d0 = puVar7[2];
    uStack_1cc = puVar7[3];
    if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_1d8);
  }
  local_198 = 0x19;
  plVar8 = (longlong *)(**(code **)(*DAT_141dde8c8 + 8))(DAT_141dde8c8,DAT_141a026b8);
  if ((int)local_78[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_70[4];
  }
  iVar4 = FUN_140e4a740(puVar5);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar4 = FUN_140e63cb0(local_68,&local_res8,&local_res10,plVar8);
  if (0 < iVar4) {
    do {
      local_198 = 0x1b;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03d88);
      cVar3 = FUN_140e491e0(uVar6);
      uVar13 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
      if (cVar3 == '\0') {
LAB_140381fa2:
        local_198 = 0x1d;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_190);
        }
        local_190 = 0;
        local_188 = 0;
        local_184 = 5;
        puVar9 = (uint *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04338);
        if ((int)local_78[0] < 2) {
          puVar7 = (uint *)&DAT_1419df7b0;
LAB_14038205e:
          local_1d8 = *puVar7;
          uStack_1d4 = puVar7[1];
          uStack_1d0 = puVar7[2];
          uStack_1cc = puVar7[3];
          if ((1 << ((byte)local_178[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_1d8);
        }
        else {
          puVar7 = (uint *)local_70[1];
          if (puVar7 != local_178) goto LAB_14038205e;
        }
        local_c8 = local_178;
        local_1d8 = DAT_141a04278 & 0xffffff;
        uStack_1d4 = (int)(DAT_141a04278 | 0x5000000) >> 0x18 & 0xff;
        if (uStack_1d4 == 0xf) {
          uStack_1d4 = 0x4000004;
        }
        else {
          uStack_1d4 = uStack_1d4 | 0x1000000;
        }
        uStack_cc = 0xf;
        local_d8 = CONCAT44(uStack_1d4,DAT_141a04278) & 0xffffffff00ffffff;
        uStack_1d0 = uStack_d0;
        uStack_1cc = 0xf;
        if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_1d8);
        local_c0 = local_168;
        if ((int)local_78[0] < 1) {
          puVar7 = (uint *)&DAT_1419df7b0;
LAB_140382123:
          local_1d8 = *puVar7;
          uStack_1d4 = puVar7[1];
          uStack_1d0 = puVar7[2];
          uStack_1cc = puVar7[3];
          if ((1 << ((byte)local_158[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_158);
          }
          FUN_140041b80(local_158,&local_1d8);
        }
        else {
          puVar7 = (uint *)*local_70;
          if (puVar7 != local_158) goto LAB_140382123;
        }
        local_b8 = local_158;
        uVar6 = CONCAT44(uVar13,DAT_1419f4188);
        puVar7 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_190,1,uVar6,&local_c8);
        uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (puVar7 != local_148) {
          local_1d8 = *puVar7;
          uStack_1d4 = puVar7[1];
          uStack_1d0 = puVar7[2];
          uStack_1cc = puVar7[3];
          if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_148);
          }
          FUN_140041b80(local_148,&local_1d8);
        }
        local_b0 = local_148;
        if ((int)local_78[0] < 3) {
          puVar7 = (uint *)&DAT_1419df7b0;
LAB_1403821e4:
          local_1d8 = *puVar7;
          uStack_1d4 = puVar7[1];
          uStack_1d0 = puVar7[2];
          uStack_1cc = puVar7[3];
          if ((1 << ((byte)local_138[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_1d8);
        }
        else {
          puVar7 = (uint *)local_70[2];
          if (puVar7 != local_138) goto LAB_1403821e4;
        }
        local_a8 = local_138;
        if ((int)local_78[0] < 4) {
          puVar7 = (uint *)&DAT_1419df7b0;
LAB_140382233:
          local_1d8 = *puVar7;
          uStack_1d4 = puVar7[1];
          uStack_1d0 = puVar7[2];
          uStack_1cc = puVar7[3];
          if ((1 << ((byte)local_128[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_128);
          }
          FUN_140041b80(local_128,&local_1d8);
        }
        else {
          puVar7 = (uint *)local_70[3];
          if (puVar7 != local_128) goto LAB_140382233;
        }
        local_a0 = local_128;
        if ((int)local_78[0] < 6) {
          puVar7 = (uint *)&DAT_1419df7b0;
LAB_140382282:
          local_1d8 = *puVar7;
          uStack_1d4 = puVar7[1];
          uStack_1d0 = puVar7[2];
          uStack_1cc = puVar7[3];
          if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_118);
          }
          FUN_140041b80(local_118,&local_1d8);
        }
        else {
          puVar7 = (uint *)local_70[5];
          if (puVar7 != local_118) goto LAB_140382282;
        }
        local_98 = local_118;
        if (puVar9 != local_108) {
          local_1d8 = *puVar9;
          uStack_1d4 = puVar9[1];
          uStack_1d0 = puVar9[2];
          uStack_1cc = puVar9[3];
          if ((1 << ((byte)local_108[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_1d8);
        }
        uVar6 = CONCAT44(uVar13,DAT_1419fd6d8);
        local_90 = local_108;
        puVar9 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_1b8,6,uVar6,&local_c0);
        uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (puVar9 != local_f8) {
          local_1d8 = *puVar9;
          uStack_1d4 = puVar9[1];
          uStack_1d0 = puVar9[2];
          uStack_1cc = puVar9[3];
          if ((1 << ((byte)local_f8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f8);
          }
          FUN_140041b80(local_f8,&local_1d8);
        }
        local_88 = local_f8;
        ppuVar15 = (undefined1 **)CONCAT44(uVar13,DAT_1419fe568);
        FUN_140e634e0(local_res8,local_res10,&local_1c8,2,ppuVar15,&local_90);
      }
      else {
        if ((int)local_78[0] < 6) {
          puVar5 = &DAT_1419df7b0;
        }
        else {
          puVar5 = (undefined8 *)local_70[5];
        }
        cVar3 = FUN_140e491e0(puVar5);
        uVar13 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
        if (cVar3 != '\0') goto LAB_140381fa2;
      }
      cVar3 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar3 != '\0');
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_178,0x10,9,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar5 = local_70;
    do {
      puVar2 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

