// gml_Script_InputCursorLimitRemove @ 0x1403131f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputCursorLimitRemove
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
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong uVar11;
  undefined4 uVar13;
  undefined8 uVar12;
  ulonglong in_stack_fffffffffffffda0;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined1 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_230 = "gml_Script_InputCursorLimitGet";
  local_238 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_238;
  local_228 = 0x12;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_a8,param_4,1,param_5);
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_158,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f03b8);
  local_204 = 0xffffff;
  local_210 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_214 = 0;
  local_220 = 0;
  local_15c = 0;
  local_168 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde0f4) &&
     (_Init_thread_header(&DAT_141dde0f4), DAT_141dde0f4 == -1)) {
    DAT_141dde0e0 = (longlong *)FUN_140e63aa0(DAT_1419f0368);
    _Init_thread_footer(&DAT_141dde0f4);
  }
  local_228 = 0x12;
  puVar9 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_a8[0];
  if ((int)local_a8[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_a0;
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_228 = 0x12;
    if ((int)local_a8[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_a0;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if (DAT_141ddc0c9 == '\0') {
    FUN_140e64380(DAT_141dde0e0,"gml_Script_InputCursorLimitGet");
    FUN_140e64380(local_res8,"gml_Script_InputCursorLimitGet");
  }
  local_228 = 0x14;
  if (DAT_141ddc0c9 == '\0') {
    DAT_141ddc0c9 = '\x01';
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde0e0 + 0x10))(DAT_141dde0e0,DAT_141a026b8);
    if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_220);
    }
    local_220 = 0;
    local_218 = 0;
    local_214 = 5;
    uVar11 = 0;
    uVar7 = gml_Script____struct___12___InputCursorTransformCoordinate___InputCursorTransformCoordinate
                      (local_res8,local_res10,&local_220,0,0);
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_1419fed38,0x80000000,&local_c8,uVar11,
                  in_stack_fffffffffffffda0 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar11 >> 0x20);
    FUN_140e609c0(DAT_141dde0e0);
    if (&local_c8 != puVar6) {
      local_248 = local_c8;
      uStack_240 = uStack_c0;
      uStack_23c = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_248);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde0e0 + 0x10))(DAT_141dde0e0,DAT_141a00fe8);
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_178,gml_GlobalScript_InputCursorLimitRemove,0);
    if (&local_178 != puVar5) {
      local_248 = local_178;
      uStack_240 = uStack_170;
      uStack_23c = uStack_16c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_248);
    }
    FUN_140e60910(1);
    if (puVar5 != &local_158) {
      local_248 = *puVar5;
      uStack_240 = *(undefined4 *)(puVar5 + 1);
      uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_248);
    }
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_f8 = &local_158;
    FUN_140e609c0(DAT_141dde0e0);
    uVar7 = CONCAT44(uVar13,DAT_1419fd6d8);
    puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_168,1,uVar7,&local_f8);
    uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar5 != puVar6) {
      local_248 = *puVar5;
      uStack_240 = *(undefined4 *)(puVar5 + 1);
      uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_248);
    }
    FUN_140e60910(1);
  }
  local_228 = 4;
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  local_220 = 0;
  local_218 = 0;
  local_214 = 5;
  if ((int)local_a8[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14031371e:
    local_248 = *puVar5;
    uStack_240 = *(undefined4 *)(puVar5 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_248);
  }
  else {
    puVar5 = (undefined8 *)*local_a0;
    if (puVar5 != &local_158) goto LAB_14031371e;
  }
  local_f8 = &local_158;
  uVar12 = CONCAT44(uVar13,DAT_141a014a8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_220,1,uVar12,&local_f8);
  uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_228 = 0xc;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    if ((int)local_a8[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_14031381c:
      local_248 = *puVar5;
      uStack_240 = *(undefined4 *)(puVar5 + 1);
      uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_248);
    }
    else {
      puVar5 = (undefined8 *)*local_a0;
      if (puVar5 != &local_148) goto LAB_14031381c;
    }
    local_f0 = &local_148;
    local_248 = CONCAT44(uRam0000000141dcfefc,_DAT_141dcfef8);
    uStack_240 = uRam0000000141dcff00;
    uStack_23c = DAT_141dcff04;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_248);
    local_e8 = local_138;
    puVar5 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_108,1,CONCAT44(uVar13,DAT_1419fdc58),
                           &local_f0);
    if (puVar5 != &local_128) {
      local_248 = *puVar5;
      uStack_240 = *(undefined4 *)(puVar5 + 1);
      uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_248);
    }
    local_e0 = &local_128;
    local_248 = CONCAT44(uRam0000000141dcfedc,_DAT_141dcfed8);
    uStack_240 = uRam0000000141dcfee0;
    uStack_23c = DAT_141dcfee4;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_248);
    local_d8 = local_118;
    FUN_14008e020(local_res8,local_res10,&local_168,3,&local_e8);
  }
  local_228 = 0x14;
  if ((int)local_a8[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_a0;
  }
  uStack_16c = 0;
  local_178 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (uVar4 < 0x80000000) {
    local_228 = 0x19;
    if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_220);
    }
    local_220 = 0;
    local_218 = 0;
    local_214 = 5;
    local_248 = CONCAT44(uRam0000000141dcff0c,_DAT_141dcff08);
    uStack_240 = uRam0000000141dcff10;
    uStack_23c = DAT_141dcff14;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_248);
    local_f8 = &local_158;
    if ((int)local_a8[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140313a73:
      local_248 = *puVar5;
      uStack_240 = *(undefined4 *)(puVar5 + 1);
      uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_248);
    }
    else {
      puVar5 = (undefined8 *)*local_a0;
      if (puVar5 != &local_148) goto LAB_140313a73;
    }
    local_f0 = &local_148;
    local_248 = CONCAT44(uRam0000000141dcfebc,_DAT_141dcfeb8);
    uStack_240 = uRam0000000141dcfec0;
    uStack_23c = DAT_141dcfec4;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_248);
    local_e8 = local_138;
    local_248 = CONCAT44(uRam00000001419e3f24,_DAT_1419e3f20);
    uStack_240 = uRam00000001419e3f28;
    uStack_23c = uRam00000001419e3f2c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_248);
    local_e0 = &local_128;
    local_248 = CONCAT44(uRam0000000141dcfecc,_DAT_141dcfec8);
    uStack_240 = uRam0000000141dcfed0;
    uStack_23c = DAT_141dcfed4;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_248);
    local_d8 = local_118;
    FUN_14008e020(local_res8,local_res10,&local_220,5,&local_f8);
  }
  local_228 = 0x24;
  if ((int)local_a8[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_a0;
  }
  uStack_16c = 0;
  local_178 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140313d2b;
  local_228 = 0x28;
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  local_220 = 0;
  local_218 = 0;
  local_214 = 5;
  local_248 = CONCAT44(uRam0000000141dcff0c,_DAT_141dcff08);
  uStack_240 = uRam0000000141dcff10;
  uStack_23c = DAT_141dcff14;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_248);
  local_f8 = &local_158;
  if ((int)local_a8[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140313c87:
    local_248 = *puVar5;
    uStack_240 = *(undefined4 *)(puVar5 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_248);
  }
  else {
    puVar5 = (undefined8 *)*local_a0;
    if (puVar5 != &local_148) goto LAB_140313c87;
  }
  local_f0 = &local_148;
  local_248 = CONCAT44(uRam0000000141dcfeec,_DAT_141dcfee8);
  uStack_240 = uRam0000000141dcfef0;
  uStack_23c = DAT_141dcfef4;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_248);
  local_e8 = local_138;
  FUN_14008e020(local_res8,local_res10,&local_220,3,&local_f8);
LAB_140313d2b:
  local_228 = 0x24;
  plVar8 = (longlong *)(**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a026b8);
  if (0 < (int)local_a8[0]) {
    puVar9 = (undefined8 *)*local_a0;
  }
  iVar3 = FUN_140e4a740(puVar9);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar3 = FUN_140e63cb0(local_98,&local_res8,&local_res10,plVar8);
  if (0 < iVar3) {
    do {
      local_228 = 0x26;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a00d28);
      uStack_16c = 0;
      local_178 = 0x4008000000000000;
      iVar3 = FUN_140e851f0(uVar7,&local_178,DAT_141955260,0);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if (iVar3 == 0) {
        local_228 = 0x28;
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        local_204 = 0;
        local_210 = 0x4008000000000000;
        FUN_140e87930(uVar7,DAT_1419f0378,0x80000000,&local_210);
        local_228 = 0x29;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a00cf8);
        if (puVar5 != &local_190) {
          local_258 = *(undefined4 *)puVar5;
          uStack_254 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_250 = *(undefined4 *)(puVar5 + 1);
          uStack_24c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_190);
          }
          FUN_140041b80(&local_190,&local_258);
        }
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        FUN_140e86c30(uVar7,DAT_1419fe0e8,0x80000000,&local_190);
        local_228 = 0x2a;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a00e08);
        if (puVar5 != &local_1a0) {
          local_258 = *(undefined4 *)puVar5;
          uStack_254 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_250 = *(undefined4 *)(puVar5 + 1);
          uStack_24c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a0);
          }
          FUN_140041b80(&local_1a0,&local_258);
        }
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        FUN_140e86c30(uVar7,DAT_1419fe158,0x80000000,&local_1a0);
        local_228 = 0x2b;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a00de8);
        if (puVar5 != &local_1b0) {
          local_258 = *(undefined4 *)puVar5;
          uStack_254 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_250 = *(undefined4 *)(puVar5 + 1);
          uStack_24c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b0);
          }
          FUN_140041b80(&local_1b0,&local_258);
        }
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        FUN_140e87930(uVar7,DAT_1419fe698,0x80000000,&local_1b0);
        local_228 = 0x2c;
        local_258 = (undefined4)DAT_1419df7b0;
        uStack_254 = DAT_1419df7b0._4_4_;
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c0);
        }
        FUN_140041b80(&local_1c0,&local_258);
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        FUN_140e87930(uVar7,DAT_1419fe318,0x80000000,&local_1c0);
        local_228 = 0x2d;
        local_258 = (undefined4)DAT_1419df7b0;
        uStack_254 = DAT_1419df7b0._4_4_;
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
        if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d0);
        }
        FUN_140041b80(&local_1d0,&local_258);
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        FUN_140e87930(uVar7,DAT_1419fe838,0x80000000,&local_1d0);
        local_228 = 0x2e;
        local_258 = (undefined4)DAT_1419df7b0;
        uStack_254 = DAT_1419df7b0._4_4_;
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
        if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e0);
        }
        FUN_140041b80(&local_1e0,&local_258);
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        FUN_140e87930(uVar7,DAT_1419fe1f8,0x80000000,&local_1e0);
        local_228 = 0x2f;
        local_258 = (undefined4)DAT_1419df7b0;
        uStack_254 = DAT_1419df7b0._4_4_;
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
        if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f0);
        }
        FUN_140041b80(&local_1f0,&local_258);
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        FUN_140e87930(uVar7,DAT_1419fe4c8,0x80000000,&local_1f0);
        local_228 = 0x30;
LAB_140314cc5:
        local_258 = (undefined4)DAT_1419df7b0;
        uStack_254 = DAT_1419df7b0._4_4_;
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
LAB_140314ccc:
        if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_200);
        }
        FUN_140041b80(&local_200,&local_258);
      }
      else {
        local_228 = 0x32;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a00d28);
        local_ac = 0;
        local_b8 = 0x3ff0000000000000;
        iVar3 = FUN_140e851f0(uVar7,&local_b8,DAT_141955260,0);
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        if (iVar3 != 0) {
          local_228 = 0x3e;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a00d28);
          uStack_23c = 0;
          local_248 = 0x4000000000000000;
          iVar3 = FUN_140e851f0(uVar7,&local_248,DAT_141955260,0);
          if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          if (iVar3 == 0) {
            local_228 = 0x40;
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))();
            if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_210);
            }
            local_204 = 0;
            local_210 = 0x4000000000000000;
            FUN_140e87930(uVar7,DAT_1419f0378,0x80000000,&local_210);
            local_228 = 0x41;
            local_258 = (undefined4)DAT_1419df7b0;
            uStack_254 = DAT_1419df7b0._4_4_;
            uStack_250 = DAT_1419df7b8;
            uStack_24c = DAT_1419df7bc;
            if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_190);
            }
            FUN_140041b80(&local_190,&local_258);
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
            FUN_140e86c30(uVar7,DAT_1419fe0e8,0x80000000,&local_190);
            local_228 = 0x42;
            local_258 = (undefined4)DAT_1419df7b0;
            uStack_254 = DAT_1419df7b0._4_4_;
            uStack_250 = DAT_1419df7b8;
            uStack_24c = DAT_1419df7bc;
            if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a0);
            }
            FUN_140041b80(&local_1a0,&local_258);
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
            FUN_140e86c30(uVar7,DAT_1419fe158,0x80000000,&local_1a0);
            local_228 = 0x43;
            local_258 = (undefined4)DAT_1419df7b0;
            uStack_254 = DAT_1419df7b0._4_4_;
            uStack_250 = DAT_1419df7b8;
            uStack_24c = DAT_1419df7bc;
            if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b0);
            }
            FUN_140041b80(&local_1b0,&local_258);
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
            FUN_140e87930(uVar7,DAT_1419fe698,0x80000000,&local_1b0);
            local_228 = 0x44;
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a00d38);
            if (puVar5 != &local_1c0) {
              local_258 = *(undefined4 *)puVar5;
              uStack_254 = *(undefined4 *)((longlong)puVar5 + 4);
              uStack_250 = *(undefined4 *)(puVar5 + 1);
              uStack_24c = *(undefined4 *)((longlong)puVar5 + 0xc);
              if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1c0);
              }
              FUN_140041b80(&local_1c0,&local_258);
            }
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
            FUN_140e87930(uVar7,DAT_1419fe318,0x80000000,&local_1c0);
            local_228 = 0x45;
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a00d98);
            if (puVar5 != &local_1d0) {
              local_258 = *(undefined4 *)puVar5;
              uStack_254 = *(undefined4 *)((longlong)puVar5 + 4);
              uStack_250 = *(undefined4 *)(puVar5 + 1);
              uStack_24c = *(undefined4 *)((longlong)puVar5 + 0xc);
              if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1d0);
              }
              FUN_140041b80(&local_1d0,&local_258);
            }
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
            FUN_140e87930(uVar7,DAT_1419fe838,0x80000000,&local_1d0);
            local_228 = 0x46;
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a00e58);
            if (puVar5 != &local_1e0) {
              local_258 = *(undefined4 *)puVar5;
              uStack_254 = *(undefined4 *)((longlong)puVar5 + 4);
              uStack_250 = *(undefined4 *)(puVar5 + 1);
              uStack_24c = *(undefined4 *)((longlong)puVar5 + 0xc);
              if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e0);
              }
              FUN_140041b80(&local_1e0,&local_258);
            }
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
            FUN_140e87930(uVar7,DAT_1419fe1f8,0x80000000,&local_1e0);
            local_228 = 0x47;
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a00c88);
            if (puVar5 != &local_1f0) {
              local_258 = *(undefined4 *)puVar5;
              uStack_254 = *(undefined4 *)((longlong)puVar5 + 4);
              uStack_250 = *(undefined4 *)(puVar5 + 1);
              uStack_24c = *(undefined4 *)((longlong)puVar5 + 0xc);
              if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1f0);
              }
              FUN_140041b80(&local_1f0,&local_258);
            }
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
            FUN_140e87930(uVar7,DAT_1419fe4c8,0x80000000,&local_1f0);
            local_228 = 0x48;
          }
          else {
            local_228 = 0x4c;
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
            if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_210);
            }
            local_204 = 0;
            local_210 = 0;
            FUN_140e87930(uVar7,DAT_1419f0378,0x80000000,&local_210);
            local_228 = 0x4d;
            local_258 = (undefined4)DAT_1419df7b0;
            uStack_254 = DAT_1419df7b0._4_4_;
            uStack_250 = DAT_1419df7b8;
            uStack_24c = DAT_1419df7bc;
            if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_190);
            }
            FUN_140041b80(&local_190,&local_258);
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
            FUN_140e86c30(uVar7,DAT_1419fe0e8,0x80000000,&local_190);
            local_228 = 0x4e;
            local_258 = (undefined4)DAT_1419df7b0;
            uStack_254 = DAT_1419df7b0._4_4_;
            uStack_250 = DAT_1419df7b8;
            uStack_24c = DAT_1419df7bc;
            if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a0);
            }
            FUN_140041b80(&local_1a0,&local_258);
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
            FUN_140e86c30(uVar7,DAT_1419fe158,0x80000000,&local_1a0);
            local_228 = 0x4f;
            local_258 = (undefined4)DAT_1419df7b0;
            uStack_254 = DAT_1419df7b0._4_4_;
            uStack_250 = DAT_1419df7b8;
            uStack_24c = DAT_1419df7bc;
            if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b0);
            }
            FUN_140041b80(&local_1b0,&local_258);
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
            FUN_140e87930(uVar7,DAT_1419fe698,0x80000000,&local_1b0);
            local_228 = 0x50;
            local_258 = (undefined4)DAT_1419df7b0;
            uStack_254 = DAT_1419df7b0._4_4_;
            uStack_250 = DAT_1419df7b8;
            uStack_24c = DAT_1419df7bc;
            if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c0);
            }
            FUN_140041b80(&local_1c0,&local_258);
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
            FUN_140e87930(uVar7,DAT_1419fe318,0x80000000,&local_1c0);
            local_228 = 0x51;
            local_258 = (undefined4)DAT_1419df7b0;
            uStack_254 = DAT_1419df7b0._4_4_;
            uStack_250 = DAT_1419df7b8;
            uStack_24c = DAT_1419df7bc;
            if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d0);
            }
            FUN_140041b80(&local_1d0,&local_258);
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
            FUN_140e87930(uVar7,DAT_1419fe838,0x80000000,&local_1d0);
            local_228 = 0x52;
            local_258 = (undefined4)DAT_1419df7b0;
            uStack_254 = DAT_1419df7b0._4_4_;
            uStack_250 = DAT_1419df7b8;
            uStack_24c = DAT_1419df7bc;
            if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e0);
            }
            FUN_140041b80(&local_1e0,&local_258);
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
            FUN_140e87930(uVar7,DAT_1419fe1f8,0x80000000,&local_1e0);
            local_228 = 0x53;
            local_258 = (undefined4)DAT_1419df7b0;
            uStack_254 = DAT_1419df7b0._4_4_;
            uStack_250 = DAT_1419df7b8;
            uStack_24c = DAT_1419df7bc;
            if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f0);
            }
            FUN_140041b80(&local_1f0,&local_258);
            uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
            FUN_140e87930(uVar7,DAT_1419fe4c8,0x80000000,&local_1f0);
            local_228 = 0x54;
          }
          goto LAB_140314cc5;
        }
        local_228 = 0x34;
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        local_204 = 0;
        local_210 = 0x3ff0000000000000;
        FUN_140e87930(uVar7,DAT_1419f0378,0x80000000,&local_210);
        local_228 = 0x35;
        local_258 = (undefined4)DAT_1419df7b0;
        uStack_254 = DAT_1419df7b0._4_4_;
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
        if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_190);
        }
        FUN_140041b80(&local_190,&local_258);
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        FUN_140e86c30(uVar7,DAT_1419fe0e8,0x80000000,&local_190);
        local_228 = 0x36;
        local_258 = (undefined4)DAT_1419df7b0;
        uStack_254 = DAT_1419df7b0._4_4_;
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
        if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a0);
        }
        FUN_140041b80(&local_1a0,&local_258);
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        FUN_140e86c30(uVar7,DAT_1419fe158,0x80000000,&local_1a0);
        local_228 = 0x37;
        local_258 = (undefined4)DAT_1419df7b0;
        uStack_254 = DAT_1419df7b0._4_4_;
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
        if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b0);
        }
        FUN_140041b80(&local_1b0,&local_258);
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        FUN_140e87930(uVar7,DAT_1419fe698,0x80000000,&local_1b0);
        local_228 = 0x38;
        local_258 = (undefined4)DAT_1419df7b0;
        uStack_254 = DAT_1419df7b0._4_4_;
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c0);
        }
        FUN_140041b80(&local_1c0,&local_258);
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        FUN_140e87930(uVar7,DAT_1419fe318,0x80000000,&local_1c0);
        local_228 = 0x39;
        local_258 = (undefined4)DAT_1419df7b0;
        uStack_254 = DAT_1419df7b0._4_4_;
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
        if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d0);
        }
        FUN_140041b80(&local_1d0,&local_258);
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        FUN_140e87930(uVar7,DAT_1419fe838,0x80000000,&local_1d0);
        local_228 = 0x3a;
        local_258 = (undefined4)DAT_1419df7b0;
        uStack_254 = DAT_1419df7b0._4_4_;
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
        if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e0);
        }
        FUN_140041b80(&local_1e0,&local_258);
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        FUN_140e87930(uVar7,DAT_1419fe1f8,0x80000000,&local_1e0);
        local_228 = 0x3b;
        local_258 = (undefined4)DAT_1419df7b0;
        uStack_254 = DAT_1419df7b0._4_4_;
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
        if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f0);
        }
        FUN_140041b80(&local_1f0,&local_258);
        uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
        FUN_140e87930(uVar7,DAT_1419fe4c8,0x80000000,&local_1f0);
        local_228 = 0x3c;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a00cc8);
        if (puVar5 != &local_200) {
          local_258 = *(undefined4 *)puVar5;
          uStack_254 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_250 = *(undefined4 *)(puVar5 + 1);
          uStack_24c = *(undefined4 *)((longlong)puVar5 + 0xc);
          goto LAB_140314ccc;
        }
      }
      uVar7 = (**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
      FUN_140e87930(uVar7,DAT_1419f0428,0x80000000);
      cVar2 = FUN_140e643f0(local_98,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_98,&local_res8,&local_res10);
  local_228 = 0x58;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141dde0e0 + 8))(DAT_141dde0e0,DAT_141a00fe8);
  if (puVar5 != param_3) {
    local_258 = *(undefined4 *)puVar5;
    uStack_254 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_250 = *(undefined4 *)(puVar5 + 1);
    uStack_24c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_258);
  }
  if (local_88 != 0) {
    FUN_140e4cd60();
    local_88 = 0;
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,5,FUN_140041b30);
  if (0 < (int)local_a8[0]) {
    puVar5 = local_a0;
    do {
      puVar9 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      *(undefined4 *)((longlong)puVar9 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_a0);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return param_3;
}

