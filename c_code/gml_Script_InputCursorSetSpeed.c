// gml_Script_InputCursorSetSpeed @ 0x140315cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputCursorSetSpeed
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  ulonglong in_stack_fffffffffffffe80;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined4 local_f8 [3];
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
  undefined4 *local_a0;
  undefined1 *local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_140 = "gml_Script_InputCursorSet";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0xb;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_78,param_4,4,param_5);
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_15c = 0;
  local_168 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde104) &&
     (_Init_thread_header(&DAT_141dde104), DAT_141dde104 == -1)) {
    DAT_141dde108 = (longlong *)FUN_140e63aa0(DAT_1419f0528);
    _Init_thread_footer(&DAT_141dde104);
  }
  local_138 = 0xb;
  uVar10 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_70[2];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_138 = 0xb;
    if ((int)local_78[0] < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_70[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if ((int)local_78[0] < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_70[3];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    uStack_14c = 0xd;
    local_158 = 0;
    if ((int)local_78[0] < 4) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_70[3];
      if (&local_158 == puVar5) goto LAB_140315ecf;
    }
    local_178 = 0;
    uStack_174 = 0;
    uStack_170 = uStack_150;
    uStack_16c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_178);
  }
LAB_140315ecf:
  if (DAT_141ddc0cb == '\0') {
    FUN_140e64380(DAT_141dde108,"gml_Script_InputCursorSet");
    FUN_140e64380(local_res8,"gml_Script_InputCursorSet");
  }
  local_138 = 0xd;
  if (DAT_141ddc0cb == '\0') {
    DAT_141ddc0cb = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde108 + 0x10))(DAT_141dde108,DAT_141a026b8);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uVar12 = 0;
    uVar6 = gml_Script____struct___12___InputCursorTransformCoordinate___InputCursorTransformCoordinate
                      (local_res8,local_res10,&local_168,0,0);
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419fed38,0x80000000,&local_88,uVar12,
                  in_stack_fffffffffffffe80 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar12 >> 0x20);
    FUN_140e609c0(DAT_141dde108);
    if (&local_88 != puVar5) {
      local_178 = (undefined4)local_88;
      uStack_174 = local_88._4_4_;
      uStack_170 = uStack_80;
      uStack_16c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_178);
    }
    FUN_140e60910(1);
  }
  local_138 = 4;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((int)local_78[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_14031603f:
    local_178 = *(undefined4 *)puVar5;
    uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  else {
    puVar5 = (undefined8 *)local_70[2];
    if (puVar5 != &local_128) goto LAB_14031603f;
  }
  local_b8 = &local_128;
  uVar13 = CONCAT44(uVar11,DAT_141a014a8);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_168,1,uVar13,&local_b8);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  uVar11 = 0;
  if (cVar2 == '\0') {
    local_138 = 0xb;
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((int)local_78[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_14031610d:
      local_178 = *(undefined4 *)puVar5;
      uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_170 = *(undefined4 *)(puVar5 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
    }
    else {
      puVar5 = (undefined8 *)local_70[2];
      if (puVar5 != &local_118) goto LAB_14031610d;
    }
    local_b0 = &local_118;
    local_178 = _DAT_141dcff88;
    uStack_174 = uRam0000000141dcff8c;
    uStack_170 = uRam0000000141dcff90;
    uStack_16c = DAT_141dcff94;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_178);
    local_a8 = local_108;
    puVar7 = (undefined4 *)
             FUN_140e634e0(local_res8,local_res10,&local_d8,1,CONCAT44(uVar14,DAT_1419fdc58),
                           &local_b0);
    if (puVar7 != local_f8) {
      local_178 = *puVar7;
      uStack_174 = puVar7[1];
      uStack_170 = puVar7[2];
      uStack_16c = puVar7[3];
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_178);
    }
    local_a0 = local_f8;
    local_178 = _DAT_141dcffb8;
    uStack_174 = uRam0000000141dcffbc;
    uStack_170 = uRam0000000141dcffc0;
    uStack_16c = DAT_141dcffc4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_178);
    local_98 = local_e8;
    FUN_14008e020(local_res8,local_res10,&local_c8,3,&local_a8);
    uVar11 = local_bc;
  }
  local_138 = 0x10;
  if ((int)local_78[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_70[2];
  }
  uStack_14c = 0;
  local_158 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (uVar4 < 0x80000000) {
    local_138 = 0x16;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_178 = _DAT_141dcff78;
    uStack_174 = uRam0000000141dcff7c;
    uStack_170 = uRam0000000141dcff80;
    uStack_16c = DAT_141dcff84;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
    local_b8 = &local_128;
    if ((int)local_78[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_140316350:
      local_178 = *(undefined4 *)puVar5;
      uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_170 = *(undefined4 *)(puVar5 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
    }
    else {
      puVar5 = (undefined8 *)local_70[2];
      if (puVar5 != &local_118) goto LAB_140316350;
    }
    local_b0 = &local_118;
    local_178 = _DAT_141dcffc8;
    uStack_174 = uRam0000000141dcffcc;
    uStack_170 = uRam0000000141dcffd0;
    uStack_16c = DAT_141dcffd4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_178);
    local_a8 = local_108;
    local_178 = _DAT_1419e3f40;
    uStack_174 = uRam00000001419e3f44;
    uStack_170 = uRam00000001419e3f48;
    uStack_16c = uRam00000001419e3f4c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_178);
    local_a0 = local_f8;
    local_178 = _DAT_141dcff98;
    uStack_174 = uRam0000000141dcff9c;
    uStack_170 = uRam0000000141dcffa0;
    uStack_16c = DAT_141dcffa4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_178);
    local_98 = local_e8;
    FUN_14008e020(local_res8,local_res10,&local_168,5,&local_b8);
  }
  local_138 = 0x20;
  if ((int)local_78[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_70[2];
  }
  uStack_14c = 0;
  local_158 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_1403165ee;
  local_138 = 0x20;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_178 = _DAT_141dcff78;
  uStack_174 = uRam0000000141dcff7c;
  uStack_170 = uRam0000000141dcff80;
  uStack_16c = DAT_141dcff84;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_178);
  local_b8 = &local_128;
  if ((int)local_78[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_140316553:
    local_178 = *(undefined4 *)puVar5;
    uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
  }
  else {
    puVar5 = (undefined8 *)local_70[2];
    if (puVar5 != &local_118) goto LAB_140316553;
  }
  local_b0 = &local_118;
  local_178 = _DAT_141dcffa8;
  uStack_174 = uRam0000000141dcffac;
  uStack_170 = uRam0000000141dcffb0;
  uStack_16c = DAT_141dcffb4;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_178);
  local_a8 = local_108;
  FUN_14008e020(local_res8,local_res10,&local_168,3,&local_b8);
LAB_1403165ee:
  local_138 = 0x11;
  plVar8 = (longlong *)(**(code **)(*DAT_141dde108 + 8))(DAT_141dde108,DAT_141a026b8);
  if ((int)local_78[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_70[2];
  }
  iVar3 = FUN_140e4a740(puVar5);
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
  iVar3 = FUN_140e63cb0(local_68,&local_res8,&local_res10,plVar8);
  if (0 < iVar3) {
    do {
      local_138 = 0x13;
      if ((int)local_78[0] < 4) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)local_70[3];
      }
      cVar2 = FUN_140e491e0(puVar5);
      if (cVar2 == '\0') {
        local_138 = 0x1a;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe328);
        FUN_140e609c0(local_res8);
        if ((int)local_78[0] < 1) {
          puVar9 = &DAT_1419df7b0;
        }
        else {
          puVar9 = (undefined8 *)*local_70;
        }
        if (puVar9 != puVar5) {
          local_178 = *(undefined4 *)puVar9;
          uStack_174 = *(undefined4 *)((longlong)puVar9 + 4);
          uStack_170 = *(undefined4 *)(puVar9 + 1);
          uStack_16c = *(undefined4 *)((longlong)puVar9 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_178);
        }
        FUN_140e60910(1);
        local_138 = 0x1b;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe528);
        FUN_140e609c0(local_res8);
        if ((int)local_78[0] < 2) {
          puVar9 = &DAT_1419df7b0;
        }
        else {
          puVar9 = (undefined8 *)local_70[1];
        }
        if (puVar9 != puVar5) {
          local_178 = *(undefined4 *)puVar9;
          uStack_174 = *(undefined4 *)((longlong)puVar9 + 4);
          uStack_170 = *(undefined4 *)(puVar9 + 1);
          uStack_16c = *(undefined4 *)((longlong)puVar9 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_178);
        }
      }
      else {
        local_138 = 0x15;
        uVar6 = (**(code **)(*local_res8 + 0x10))();
        FUN_140e609c0(local_res8);
        if ((int)local_78[0] < 1) {
          puVar5 = &DAT_1419df7b0;
        }
        else {
          puVar5 = (undefined8 *)*local_70;
        }
        FUN_1400460e0(uVar6,puVar5);
        FUN_140e60910(1);
        local_138 = 0x16;
        uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe528);
        FUN_140e609c0(local_res8);
        if ((int)local_78[0] < 2) {
          FUN_1400460e0(uVar6,&DAT_1419df7b0);
        }
        else {
          FUN_1400460e0(uVar6,local_70[1]);
        }
      }
      FUN_140e60910(1);
      cVar2 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar5 = local_70;
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
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

