// gml_Object_oDescriptionBubble_Draw_64 @ 0x1408f85a0

void gml_Object_oDescriptionBubble_Draw_64(longlong *param_1,undefined8 **param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong **pplVar6;
  uint uVar7;
  longlong *local_res8;
  undefined8 **local_res10;
  undefined4 local_res18;
  undefined4 uVar11;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60 [5];
  
  local_res18 = 0;
  local_180 = "gml_Object_oDescriptionBubble_Step_0";
  local_178 = 0;
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  uVar11 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  uStack_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_178 = 2;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
  if (puVar3 != &local_b8) {
    local_1a8 = (longlong *)*puVar3;
    uStack_1a0 = *(undefined4 *)(puVar3 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_1a8);
  }
  local_78 = &local_b8;
  ppuVar12 = &local_78;
  plVar8 = (longlong *)CONCAT44(uVar11,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_198,1,plVar8,ppuVar12);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_178 = 4;
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
    FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_c8,local_res8,local_res10);
    local_1a8 = local_c8;
    uStack_1a0 = uStack_c0;
    uStack_19c = uStack_bc;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1a8);
    FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_118);
    local_178 = 5;
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
    plVar8 = local_res8;
    ppuVar12 = local_res10;
    FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_d8,local_res8,local_res10);
    local_1a8 = local_d8;
    uStack_1a0 = uStack_d0;
    uStack_19c = uStack_cc;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1a8);
    FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_128);
  }
  local_178 = 0x17;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419eedf8);
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419eedb8);
  plVar5 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419eed18);
  FUN_140e609c0(local_res8);
  uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_140 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
    local_148 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_148,puVar3);
  }
  local_res18 = 1;
  uStack_19c = 0;
  local_1a8 = (longlong *)0x3fe8000000000000;
  FUN_140042560(&local_148,&local_1a8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  iVar2 = FUN_140e851f0(uVar4,&local_148,DAT_141955260,1);
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar5);
  }
  *(undefined4 *)((longlong)plVar5 + 0xc) = 0xd;
  if (iVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x3ff00000;
  }
  *plVar5 = (ulonglong)uVar7 << 0x20;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140e60910(1);
  local_178 = 0x19;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419eee08);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0d3e8);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_178 = 0x1c;
      pplVar6 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419eee08);
      uStack_19c = 0xd;
      local_1a8 = (longlong *)0x0;
      if (&local_1a8 != pplVar6) {
        local_148 = 0;
        uStack_140 = uStack_1a0;
        uStack_13c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar6);
        }
        FUN_140041b80(pplVar6,&local_148);
      }
      goto LAB_1408f8b03;
    }
  }
  local_178 = 0x1f;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419eee08);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0d3e8);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') {
      local_178 = 0x21;
      pplVar6 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419eee08);
      uStack_19c = 0xd;
      local_1a8 = (longlong *)0x3ff0000000000000;
      if (&local_1a8 != pplVar6) {
        local_148 = 0x3ff0000000000000;
        uStack_140 = uStack_1a0;
        uStack_13c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar6);
        }
        FUN_140041b80(pplVar6,&local_148);
      }
    }
  }
LAB_1408f8b03:
  local_178 = 0x26;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0d3e8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uStack_19c = 6;
    local_1a8 = local_res8;
    uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    uVar9 = (ulonglong)plVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_e8,uVar9,uVar13);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_19c = 6;
    local_1a8 = local_res8;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_f8,uVar9,uVar13 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = local_e8;
    uStack_1a0 = uStack_e0;
    uStack_19c = uStack_dc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_1a8);
    local_78 = &local_b8;
    local_1a8 = local_f8;
    uStack_1a0 = uStack_f0;
    uStack_19c = uStack_ec;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1a8);
    local_70 = local_a8;
    uStack_19c = 0xf;
    local_1a8 = (longlong *)0x1000000000000ee;
    local_148 = 0x1000000000000ee;
    uStack_140 = uStack_1a0;
    uStack_13c = 0xf;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_148);
    local_68 = local_98;
    ppuVar12 = &local_78;
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_198,3,CONCAT44(uVar11,DAT_141a12628),
                          ppuVar12);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_178 = 0x28;
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      local_170 = 0;
      local_168 = 0;
      local_164 = 5;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a56c70);
      if (puVar3 != &local_88) {
        local_1a8 = (longlong *)*puVar3;
        uStack_1a0 = *(undefined4 *)(puVar3 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_1a8);
      }
      local_60[0] = &local_88;
      ppuVar10 = local_60;
      gml_Script_rolled_list_add(local_res8,local_res10,&local_170,1,ppuVar10);
      local_178 = 0x2c;
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_160);
      }
      local_154 = 0;
      local_160 = 0;
      uStack_19c = 0xf;
      local_1a8 = (longlong *)0x100000000000106;
      FUN_140e87930(&local_1a8,DAT_141a57b90,0x80000000,&local_160);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_178 = 0x2d;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      uStack_19c = 0xf;
      local_1a8 = (longlong *)0x100000000000106;
      FUN_140e87440(&local_1a8,DAT_141a57ba0,0x80000000,&local_108,
                    (ulonglong)ppuVar10 & 0xffffffffffffff00,
                    (ulonglong)ppuVar12 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      uStack_19c = 0xf;
      local_1a8 = (longlong *)0x100000000000106;
      uVar4 = FUN_140069500(&local_1a8);
      FUN_140e63610(uVar4,local_res10,&local_198,0,&local_108,0);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_178 = 0x2f;
      uStack_19c = 0xf;
      local_1a8 = (longlong *)0x1000000000000d1;
      iVar2 = FUN_140e63cb0(&local_148,&local_res8,&local_res10,&local_1a8);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if (0 < iVar2) {
        do {
          local_178 = 0x31;
          FUN_140edd0e0(local_res8,local_res10,0,0);
          cVar1 = FUN_140e643f0(&local_148,&local_res8);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(&local_148,&local_res8,&local_res10);
      if (local_138 != 0) {
        FUN_140e4cd60();
      }
    }
  }
  local_178 = 0x38;
  uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  FUN_140046040(uVar4);
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return;
}

