// gml_Script_InputCursorElasticRemove @ 0x14030cc10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputCursorElasticRemove
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  bool bVar13;
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong uVar14;
  undefined4 uVar15;
  ulonglong in_stack_fffffffffffffe30;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined8 local_168;
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined4 local_138 [3];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined4 *local_b0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_180 = "gml_Script_InputCursorElasticGet";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0x10;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_88,param_4,1,param_5);
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_168,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f0108);
  local_fc = 0xffffff;
  local_108 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_18c = 0;
  local_198 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde068) &&
     (_Init_thread_header(&DAT_141dde068), DAT_141dde068 == -1)) {
    DAT_141dde080 = (longlong *)FUN_140e63aa0(DAT_1419f0128);
    _Init_thread_footer(&DAT_141dde068);
  }
  local_178 = 0x10;
  uVar12 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_80;
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_178 = 0x10;
    if ((int)local_88[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_80;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if (DAT_141ddc0c2 == '\0') {
    FUN_140e64380(DAT_141dde080,"gml_Script_InputCursorElasticGet");
    FUN_140e64380(local_res8,"gml_Script_InputCursorElasticGet");
  }
  local_178 = 0x12;
  if (DAT_141ddc0c2 == '\0') {
    DAT_141ddc0c2 = '\x01';
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde080 + 0x10))(DAT_141dde080,DAT_141a026b8);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uVar14 = 0;
    uVar7 = gml_Script____struct___12___InputCursorTransformCoordinate___InputCursorTransformCoordinate
                      (local_res8,local_res10,&local_1b8,0,0);
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_1419fed38,0x80000000,&local_98,uVar14,
                  in_stack_fffffffffffffe30 & 0xffffffffffffff00);
    uVar15 = (undefined4)(uVar14 >> 0x20);
    FUN_140e609c0(DAT_141dde080);
    if (&local_98 != puVar6) {
      local_1a8 = local_98;
      uStack_1a0 = uStack_90;
      uStack_19c = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1a8);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    puVar8 = (undefined4 *)(**(code **)(*DAT_141dde080 + 0x10))(DAT_141dde080,DAT_141a00fe8);
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_1a8,gml_GlobalScript_InputCursorElasticRemove,0);
    if (&local_1a8 != puVar5) {
      local_1c8 = (undefined4)local_1a8;
      uStack_1c4 = local_1a8._4_4_;
      uStack_1c0 = uStack_1a0;
      uStack_1bc = uStack_19c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_1c8);
    }
    FUN_140e60910(1);
    if (puVar5 != &local_168) {
      local_1c8 = *(undefined4 *)puVar5;
      uStack_1c4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_1c0 = *(undefined4 *)(puVar5 + 1);
      uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1c8);
    }
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_c8 = &local_168;
    FUN_140e609c0(DAT_141dde080);
    uVar7 = CONCAT44(uVar15,DAT_1419fd6d8);
    puVar9 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_198,1,uVar7,&local_c8);
    uVar15 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar9 != puVar8) {
      local_1c8 = *puVar9;
      uStack_1c4 = puVar9[1];
      uStack_1c0 = puVar9[2];
      uStack_1bc = puVar9[3];
      if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_1c8);
    }
    FUN_140e60910(1);
  }
  local_178 = 4;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((int)local_88[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14030d0dc:
    local_1c8 = *(undefined4 *)puVar5;
    uStack_1c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1c0 = *(undefined4 *)(puVar5 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1c8);
  }
  else {
    puVar5 = (undefined8 *)*local_80;
    if (puVar5 != &local_168) goto LAB_14030d0dc;
  }
  local_c8 = &local_168;
  uVar11 = CONCAT44(uVar15,DAT_141a014a8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_1b8,1,uVar11,&local_c8);
  uVar15 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_178 = 0xb;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    if ((int)local_88[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_14030d1c9:
      local_1c8 = *(undefined4 *)puVar5;
      uStack_1c4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_1c0 = *(undefined4 *)(puVar5 + 1);
      uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1c8);
    }
    else {
      puVar5 = (undefined8 *)*local_80;
      if (puVar5 != &local_158) goto LAB_14030d1c9;
    }
    local_c0 = &local_158;
    local_1c8 = _DAT_141dcfc58;
    uStack_1c4 = uRam0000000141dcfc5c;
    uStack_1c0 = uRam0000000141dcfc60;
    uStack_1bc = DAT_141dcfc64;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1c8);
    local_b8 = local_148;
    puVar8 = (undefined4 *)
             FUN_140e634e0(local_res8,local_res10,&local_118,1,CONCAT44(uVar15,DAT_1419fdc58),
                           &local_c0);
    if (puVar8 != local_138) {
      local_1c8 = *puVar8;
      uStack_1c4 = puVar8[1];
      uStack_1c0 = puVar8[2];
      uStack_1bc = puVar8[3];
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_1c8);
    }
    local_b0 = local_138;
    local_1c8 = _DAT_141dcfc68;
    uStack_1c4 = uRam0000000141dcfc6c;
    uStack_1c0 = uRam0000000141dcfc70;
    uStack_1bc = DAT_141dcfc74;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1c8);
    local_a8 = local_128;
    FUN_14008e020(local_res8,local_res10,&local_198,3,&local_b8);
  }
  local_178 = 0x10;
  if ((int)local_88[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_80;
  }
  uStack_19c = 0;
  local_1a8 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_1a8,DAT_141955260,1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (uVar4 < 0x80000000) {
    local_178 = 0x14;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    local_1c8 = _DAT_141dcfc18;
    uStack_1c4 = uRam0000000141dcfc1c;
    uStack_1c0 = uRam0000000141dcfc20;
    uStack_1bc = DAT_141dcfc24;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1c8);
    local_c8 = &local_168;
    if ((int)local_88[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_14030d407:
      local_1c8 = *(undefined4 *)puVar5;
      uStack_1c4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_1c0 = *(undefined4 *)(puVar5 + 1);
      uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1c8);
    }
    else {
      puVar5 = (undefined8 *)*local_80;
      if (puVar5 != &local_158) goto LAB_14030d407;
    }
    local_c0 = &local_158;
    local_1c8 = _DAT_141dcfc48;
    uStack_1c4 = uRam0000000141dcfc4c;
    uStack_1c0 = uRam0000000141dcfc50;
    uStack_1bc = DAT_141dcfc54;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1c8);
    local_b8 = local_148;
    local_1c8 = _DAT_1419e3eb0;
    uStack_1c4 = uRam00000001419e3eb4;
    uStack_1c0 = uRam00000001419e3eb8;
    uStack_1bc = uRam00000001419e3ebc;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1c8);
    local_b0 = local_138;
    local_1c8 = _DAT_141dcfc28;
    uStack_1c4 = uRam0000000141dcfc2c;
    uStack_1c0 = uRam0000000141dcfc30;
    uStack_1bc = DAT_141dcfc34;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1c8);
    local_a8 = local_128;
    FUN_14008e020(local_res8,local_res10,&local_1b8,5,&local_c8);
  }
  local_178 = 0x1f;
  if ((int)local_88[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_80;
  }
  uStack_19c = 0;
  local_1a8 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_1a8,DAT_141955260,1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_14030d6a3;
  local_178 = 0x21;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  local_1c8 = _DAT_141dcfc18;
  uStack_1c4 = uRam0000000141dcfc1c;
  uStack_1c0 = uRam0000000141dcfc20;
  uStack_1bc = DAT_141dcfc24;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1c8);
  local_c8 = &local_168;
  if ((int)local_88[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14030d608:
    local_1c8 = *(undefined4 *)puVar5;
    uStack_1c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1c0 = *(undefined4 *)(puVar5 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1c8);
  }
  else {
    puVar5 = (undefined8 *)*local_80;
    if (puVar5 != &local_158) goto LAB_14030d608;
  }
  local_c0 = &local_158;
  local_1c8 = _DAT_141dcfc38;
  uStack_1c4 = uRam0000000141dcfc3c;
  uStack_1c0 = uRam0000000141dcfc40;
  uStack_1bc = DAT_141dcfc44;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1c8);
  local_b8 = local_148;
  FUN_14008e020(local_res8,local_res10,&local_1b8,3,&local_c8);
LAB_14030d6a3:
  local_178 = 0x1d;
  plVar10 = (longlong *)(**(code **)(*DAT_141dde080 + 8))(DAT_141dde080,DAT_141a026b8);
  if ((int)local_88[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_80;
  }
  iVar3 = FUN_140e4a740(puVar5);
  if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,plVar10);
  if (0 < iVar3) {
    do {
      local_178 = 0x1f;
      uVar7 = (**(code **)(*DAT_141dde080 + 8))(DAT_141dde080,DAT_141a00fe8);
      bVar13 = false;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a00cd8);
      iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar3 != 0) {
        uVar11 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a00e48);
        iVar3 = FUN_140e851f0(uVar11,&DAT_1419df7b0,DAT_141955260,0);
        bVar13 = iVar3 != 0;
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_fc = 0xd;
      if (bVar13) {
        local_108 = 0x3ff0000000000000;
      }
      else {
        local_108 = 0;
      }
      FUN_140e87930(uVar7,DAT_1419f00e8,0x80000000,&local_108);
      local_178 = 0x20;
      if (puVar5 != &local_d8) {
        local_1c8 = *(undefined4 *)puVar5;
        uStack_1c4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_1c0 = *(undefined4 *)(puVar5 + 1);
        uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_1c8);
      }
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a00cd8);
      uVar7 = (**(code **)(*DAT_141dde080 + 8))(DAT_141dde080,DAT_141a00fe8);
      FUN_140e86c30(uVar7,DAT_1419fe0e8,0x80000000,&local_d8);
      local_178 = 0x21;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a00e48);
      if (puVar5 != &local_e8) {
        local_1c8 = *(undefined4 *)puVar5;
        uStack_1c4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_1c0 = *(undefined4 *)(puVar5 + 1);
        uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_1c8);
      }
      uVar7 = (**(code **)(*DAT_141dde080 + 8))(DAT_141dde080,DAT_141a00fe8);
      FUN_140e86c30(uVar7,DAT_1419fe158,0x80000000,&local_e8);
      local_178 = 0x22;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a00e18);
      if (puVar5 != &local_f8) {
        local_1c8 = *(undefined4 *)puVar5;
        uStack_1c4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_1c0 = *(undefined4 *)(puVar5 + 1);
        uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_1c8);
      }
      uVar7 = (**(code **)(*DAT_141dde080 + 8))(DAT_141dde080,DAT_141a00fe8);
      FUN_140e87930(uVar7,DAT_141a03598,0x80000000);
      cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  local_178 = 0x25;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141dde080 + 8))(DAT_141dde080,DAT_141a00fe8);
  if (puVar5 != param_3) {
    local_1c8 = *(undefined4 *)puVar5;
    uStack_1c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1c0 = *(undefined4 *)(puVar5 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1c8);
  }
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,5,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar5 = local_80;
    do {
      puVar6 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

