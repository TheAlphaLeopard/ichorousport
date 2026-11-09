// gml_Script____struct___122_InputCursorLimitGet_InputCursorLimitGet @ 0x1403120c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___122_InputCursorLimitGet_InputCursorLimitGet
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffe80;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_150 = "gml_Script_InputCursorLimitCircle";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0xb;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_78,param_4,4,param_5);
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_16c = 0;
  local_178 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde0d8) &&
     (_Init_thread_header(&DAT_141dde0d8), DAT_141dde0d8 == -1)) {
    DAT_141dde0d0 = (longlong *)FUN_140e63aa0(DAT_1419f02a8);
    _Init_thread_footer(&DAT_141dde0d8);
  }
  local_148 = 0xb;
  uVar9 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_70[3];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_148 = 0xb;
    if ((int)local_78[0] < 4) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_70[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if (DAT_141ddc0c8 == '\0') {
    FUN_140e64380(DAT_141dde0d0,"gml_Script_InputCursorLimitCircle");
    FUN_140e64380(local_res8,"gml_Script_InputCursorLimitCircle");
  }
  local_148 = 0xd;
  if (DAT_141ddc0c8 == '\0') {
    DAT_141ddc0c8 = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde0d0 + 0x10))(DAT_141dde0d0,DAT_141a026b8);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uVar11 = 0;
    uVar6 = gml_Script____struct___12___InputCursorTransformCoordinate___InputCursorTransformCoordinate
                      (local_res8,local_res10,&local_178,0,0);
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419fed38,0x80000000,&local_88,uVar11,
                  in_stack_fffffffffffffe80 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar11 >> 0x20);
    FUN_140e609c0(DAT_141dde0d0);
    if (&local_88 != puVar5) {
      local_168 = local_88;
      uStack_160 = uStack_80;
      uStack_15c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_168);
    }
    FUN_140e60910(1);
  }
  local_148 = 4;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((int)local_78[0] < 4) {
    puVar5 = &DAT_1419df7b0;
LAB_1403123cd:
    local_168 = *puVar5;
    uStack_160 = *(undefined4 *)(puVar5 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
  }
  else {
    puVar5 = (undefined8 *)local_70[3];
    if (puVar5 != &local_128) goto LAB_1403123cd;
  }
  local_b8 = &local_128;
  uVar12 = CONCAT44(uVar10,DAT_141a014a8);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_178,1,uVar12,&local_b8);
  uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  uVar10 = 0;
  if (cVar2 == '\0') {
    local_148 = 9;
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((int)local_78[0] < 4) {
      puVar5 = &DAT_1419df7b0;
LAB_14031249d:
      local_168 = *puVar5;
      uStack_160 = *(undefined4 *)(puVar5 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_168);
    }
    else {
      puVar5 = (undefined8 *)local_70[3];
      if (puVar5 != &local_118) goto LAB_14031249d;
    }
    local_b0 = &local_118;
    local_168 = CONCAT44(uRam0000000141dcfe7c,_DAT_141dcfe78);
    uStack_160 = uRam0000000141dcfe80;
    uStack_15c = DAT_141dcfe84;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_168);
    local_a8 = local_108;
    puVar5 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_d8,1,CONCAT44(uVar13,DAT_1419fdc58),
                           &local_b0);
    if (puVar5 != &local_f8) {
      local_168 = *puVar5;
      uStack_160 = *(undefined4 *)(puVar5 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_168);
    }
    local_a0 = &local_f8;
    local_168 = CONCAT44(uRam0000000141dcfe9c,_DAT_141dcfe98);
    uStack_160 = uRam0000000141dcfea0;
    uStack_15c = DAT_141dcfea4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_168);
    local_98 = local_e8;
    FUN_14008e020(local_res8,local_res10,&local_c8,3,&local_a8);
    uVar10 = local_bc;
  }
  local_148 = 0xf;
  if ((int)local_78[0] < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_70[3];
  }
  uStack_15c = 0;
  local_168 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (uVar4 < 0x80000000) {
    local_148 = 0x14;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_168 = CONCAT44(uRam0000000141dcfe6c,_DAT_141dcfe68);
    uStack_160 = uRam0000000141dcfe70;
    uStack_15c = DAT_141dcfe74;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
    local_b8 = &local_128;
    if ((int)local_78[0] < 4) {
      puVar5 = &DAT_1419df7b0;
LAB_1403126e2:
      local_168 = *puVar5;
      uStack_160 = *(undefined4 *)(puVar5 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_168);
    }
    else {
      puVar5 = (undefined8 *)local_70[3];
      if (puVar5 != &local_118) goto LAB_1403126e2;
    }
    local_b0 = &local_118;
    local_168 = CONCAT44(uRam0000000141dcfe8c,_DAT_141dcfe88);
    uStack_160 = uRam0000000141dcfe90;
    uStack_15c = DAT_141dcfe94;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_168);
    local_a8 = local_108;
    local_168 = CONCAT44(uRam00000001419e3f14,_DAT_1419e3f10);
    uStack_160 = uRam00000001419e3f18;
    uStack_15c = uRam00000001419e3f1c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
    local_a0 = &local_f8;
    local_168 = CONCAT44(uRam0000000141dcfeac,_DAT_141dcfea8);
    uStack_160 = uRam0000000141dcfeb0;
    uStack_15c = DAT_141dcfeb4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_168);
    local_98 = local_e8;
    FUN_14008e020(local_res8,local_res10,&local_178,5,&local_b8);
  }
  local_148 = 0x1c;
  if ((int)local_78[0] < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_70[3];
  }
  uStack_15c = 0;
  local_168 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140312982;
  local_148 = 0x1c;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  local_140 = _DAT_141dcfe68;
  uStack_13c = uRam0000000141dcfe6c;
  uStack_138 = uRam0000000141dcfe70;
  uStack_134 = DAT_141dcfe74;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_140);
  local_b8 = &local_128;
  if ((int)local_78[0] < 4) {
    puVar5 = &DAT_1419df7b0;
LAB_1403128e7:
    local_140 = *(undefined4 *)puVar5;
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_138 = *(undefined4 *)(puVar5 + 1);
    uStack_134 = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_140);
  }
  else {
    puVar5 = (undefined8 *)local_70[3];
    if (puVar5 != &local_118) goto LAB_1403128e7;
  }
  local_b0 = &local_118;
  local_140 = _DAT_141dcfe58;
  uStack_13c = uRam0000000141dcfe5c;
  uStack_138 = uRam0000000141dcfe60;
  uStack_134 = DAT_141dcfe64;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_140);
  local_a8 = local_108;
  FUN_14008e020(local_res8,local_res10,&local_178,3,&local_b8);
LAB_140312982:
  local_148 = 0x11;
  plVar7 = (longlong *)(**(code **)(*DAT_141dde0d0 + 8))(DAT_141dde0d0,DAT_141a026b8);
  if ((int)local_78[0] < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_70[3];
  }
  iVar3 = FUN_140e4a740(puVar5);
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar3 = FUN_140e63cb0(local_68,&local_res8,&local_res10,plVar7);
  if (0 < iVar3) {
    do {
      local_148 = 0x13;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a00d28);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0x4008000000000000;
      local_148 = 0x14;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a00cf8);
      FUN_140e609c0(local_res8);
      if ((int)local_78[0] < 1) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)*local_70;
      }
      if (puVar8 != puVar5) {
        local_140 = *(undefined4 *)puVar8;
        uStack_13c = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_138 = *(undefined4 *)(puVar8 + 1);
        uStack_134 = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_140);
      }
      FUN_140e60910(1);
      local_148 = 0x15;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a00e08);
      FUN_140e609c0(local_res8);
      if ((int)local_78[0] < 2) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)local_70[1];
      }
      if (puVar8 != puVar5) {
        local_140 = *(undefined4 *)puVar8;
        uStack_13c = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_138 = *(undefined4 *)(puVar8 + 1);
        uStack_134 = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_140);
      }
      FUN_140e60910(1);
      local_148 = 0x16;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a00de8);
      FUN_140e609c0(local_res8);
      if ((int)local_78[0] < 3) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)local_70[2];
      }
      if (puVar8 != puVar5) {
        local_140 = *(undefined4 *)puVar8;
        uStack_13c = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_138 = *(undefined4 *)(puVar8 + 1);
        uStack_134 = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_140);
      }
      FUN_140e60910(1);
      local_148 = 0x18;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a00dc8);
      FUN_140e63610(local_res8,local_res10,&local_178,0,uVar6,0);
      cVar2 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar2 != '\0');
    param_3 = local_res18;
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar5 = local_70;
    do {
      puVar8 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

