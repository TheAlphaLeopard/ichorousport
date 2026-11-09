// gml_Script___get_model_anon_49775___scribble_class_element___scribble_class_element @ 0x140131330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___get_model_anon_49775___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,uint param_4,undefined8 *param_5
          )

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong **pplVar8;
  longlong **pplVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *local_res8;
  undefined8 local_res10;
  uint local_res18;
  uint local_res20 [2];
  ulonglong uVar14;
  longlong ***ppplVar15;
  ulonglong uVar16;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 local_16c;
  longlong *local_168;
  undefined4 local_15c;
  undefined4 local_158 [3];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  longlong *local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong **local_f8;
  longlong **local_f0;
  undefined4 *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined8 *local_98;
  longlong **local_90;
  undefined8 *local_88;
  uint *local_80;
  longlong ***local_78;
  longlong **local_70;
  undefined8 *local_68;
  
  local_res18 = 0;
  local_1b0 = "gml_Script_overwrite@anon@47562@__scribble_class_element@__scribble_class_element";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1a8 = 0x626;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res20[0] = param_4;
  FUN_140041df0(local_a8,param_4,2,param_5);
  uVar13 = (ulonglong)local_a8[0];
  local_res20[0] = local_a8[0];
  param_5 = local_a0;
  _eh_vector_constructor_iterator_(&local_178,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_12c = 0xffffff;
  local_138 = (longlong *)0x0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1a8 = 0x626;
  if ((int)local_res20[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_1a8 = 0x626;
    puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a05598);
    if ((int)local_res20[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
    }
    if (puVar5 != puVar6) {
      local_108 = *(undefined4 *)puVar5;
      uStack_104 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_100 = *(undefined4 *)(puVar5 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_108);
    }
  }
  local_1a8 = 0x628;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05358);
  FUN_140e609c0(local_res8);
  if ((int)local_res20[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  if (puVar6 != puVar5) {
    local_108 = *(undefined4 *)puVar6;
    uStack_104 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_100 = *(undefined4 *)(puVar6 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_108);
  }
  FUN_140e60910(1);
  local_1a8 = 0x629;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05598);
  FUN_140e609c0(local_res8);
  if ((int)local_res20[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
  }
  if (puVar6 != puVar5) {
    local_108 = *(undefined4 *)puVar6;
    uStack_104 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_100 = *(undefined4 *)(puVar6 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_108);
  }
  FUN_140e60910(1);
  local_1a8 = 0x62b;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05358);
  if ((int)local_res20[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    uStack_18c = DAT_141dcb6b4;
    uStack_190 = DAT_141dcb6b0;
    if ((1 << ((byte)DAT_141dcb6b4 & 0x1f) & 0x46U) == 0) {
      local_198 = DAT_141dcb6a8;
    }
    else {
      FUN_1400419b0(&local_198,&DAT_141dcb6a8);
    }
    puVar5 = &local_198;
    uVar12 = 1;
  }
  else {
    local_98 = &local_128;
    local_90 = &local_178;
    local_88 = &param_5;
    local_80 = local_res20;
    local_78 = &local_f8;
    local_70 = &local_res8;
    local_68 = &local_res10;
    puVar5 = (undefined8 *)FUN_1401322f0(&local_98,&local_108);
    uVar12 = 2;
  }
  uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_d8 = *puVar5;
  }
  else {
    local_res18 = uVar12;
    FUN_1400419b0(&local_d8,puVar5);
  }
  local_res18 = uVar12 | 4;
  FUN_1400460e0(&local_d8,uVar7);
  local_1c8 = (undefined4)local_d8;
  uStack_1c4 = local_d8._4_4_;
  uStack_1c0 = uStack_d0;
  uStack_1bc = uStack_cc;
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_1c8);
  local_res18 = uVar12;
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (((uVar12 & 2) != 0) &&
     (uVar12 = uVar12 & 0xfffffff9, local_res18 = uVar12,
     (1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_108);
  }
  if (((uVar12 & 1) != 0) && ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_198);
  }
  local_1a8 = 0x62c;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a058c8);
  iVar3 = FUN_140e851f0(uVar7,&local_118,DAT_141955260,0);
  if (iVar3 == 0) goto LAB_140132110;
  local_1a8 = 0x62e;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a04e78);
  FUN_140e63610(local_res8,local_res10,&local_1d8,0,uVar7,0);
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_1a8 = 0x62f;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05c98);
  uStack_18c = 0xd;
  local_198 = 0;
  if (&local_198 != puVar5) {
    local_1c8 = 0;
    uStack_1c4 = 0;
    uStack_1c0 = uStack_190;
    uStack_1bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_1c8);
  }
  local_1a8 = 0x631;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05918);
  uStack_18c = 0xd;
  local_198 = 0x3ff0000000000000;
  if (&local_198 != puVar5) {
    local_1c8 = 0;
    uStack_1c4 = 0x3ff00000;
    uStack_1c0 = uStack_190;
    uStack_1bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_1c8);
  }
  local_1a8 = 0x632;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a058c8);
  FUN_140e609c0(local_res8);
  if (&local_118 != puVar5) {
    local_1c8 = (undefined4)local_118;
    uStack_1c4 = local_118._4_4_;
    uStack_1c0 = uStack_110;
    uStack_1bc = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_1c8);
  }
  FUN_140e60910(1);
  local_1a8 = 0x634;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  pplVar8 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a058c8);
  pplVar9 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04d68);
  if (pplVar9 != &local_178) {
    local_1c8 = *(undefined4 *)pplVar9;
    uStack_1c4 = *(undefined4 *)((longlong)pplVar9 + 4);
    uStack_1c0 = *(undefined4 *)(pplVar9 + 1);
    uStack_1bc = *(undefined4 *)((longlong)pplVar9 + 0xc);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1c8);
  }
  local_f8 = &local_178;
  if (pplVar8 != &local_168) {
    local_1c8 = *(undefined4 *)pplVar8;
    uStack_1c4 = *(undefined4 *)((longlong)pplVar8 + 4);
    uStack_1c0 = *(undefined4 *)(pplVar8 + 1);
    uStack_1bc = *(undefined4 *)((longlong)pplVar8 + 0xc);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1c8);
  }
  local_f0 = &local_168;
  puVar5 = (undefined8 *)CONCAT44(uVar4,DAT_141a01138);
  pplVar8 = (longlong **)FUN_140e634e0(local_res8,local_res10,&local_1d8,2,puVar5,&local_f8);
  if (pplVar8 != &local_138) {
    local_1c8 = *(undefined4 *)pplVar8;
    uStack_1c4 = *(undefined4 *)((longlong)pplVar8 + 4);
    uStack_1c0 = *(undefined4 *)(pplVar8 + 1);
    uStack_1bc = *(undefined4 *)((longlong)pplVar8 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1c8);
  }
  local_1a8 = 0x635;
  iVar3 = FUN_140e851f0(&local_138,&DAT_1419df7b0,DAT_141955260,0);
  uVar4 = (undefined4)((ulonglong)puVar5 >> 0x20);
  if (iVar3 != 0) {
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    local_f8 = &local_138;
    ppplVar15 = &local_f8;
    puVar5 = (undefined8 *)CONCAT44(uVar4,DAT_141a04538);
    uVar7 = FUN_140e634e0(local_res8,local_res10,&local_1d8,1,puVar5,ppplVar15);
    cVar2 = FUN_140e491e0(uVar7);
    if (cVar2 != '\0') {
      uVar16 = (ulonglong)ppplVar15 & 0xffffffffffffff00;
      uVar14 = (ulonglong)puVar5 & 0xffffffffffffff00;
      FUN_140e87440(&local_138,DAT_141a05da8,0x80000000,&local_188,uVar14,uVar16);
      uVar16 = uVar16 & 0xffffffffffffff00;
      puVar5 = (undefined8 *)(uVar14 & 0xffffffffffffff00);
      FUN_140e87440(&local_188,DAT_141a05c98,0x80000000,&local_b8,puVar5,uVar16);
      cVar2 = FUN_140e491e0(&local_b8);
      if (cVar2 == '\0') {
        local_1a8 = 0x637;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        puVar10 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a058c8);
        local_1c8 = _DAT_141dcb448;
        uStack_1c4 = uRam0000000141dcb44c;
        uStack_1c0 = uRam0000000141dcb450;
        uStack_1bc = DAT_141dcb454;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_1c8);
        local_f0 = &local_168;
        if (puVar10 != local_158) {
          local_1c8 = *puVar10;
          uStack_1c4 = puVar10[1];
          uStack_1c0 = puVar10[2];
          uStack_1bc = puVar10[3];
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_158);
          }
          FUN_140041b80(local_158,&local_1c8);
        }
        local_e8 = local_158;
        local_1c8 = _DAT_141dcb7a8;
        uStack_1c4 = uRam0000000141dcb7ac;
        uStack_1c0 = uRam0000000141dcb7b0;
        uStack_1bc = DAT_141dcb7b4;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_1c8);
        local_e0 = local_148;
        ppplVar15 = &local_f0;
        gml_Script___scribble_error(local_res8,local_res10,&local_128,3,ppplVar15);
        local_1a8 = 0x638;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar14 = (ulonglong)ppplVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_138,DAT_141a05da8,0x80000000,&local_188,uVar14,uVar16);
        FUN_140e87440(&local_188,DAT_141a04e78,0x80000000,&local_c8,uVar14 & 0xffffffffffffff00,
                      uVar16 & 0xffffffffffffff00);
        switch(local_17c) {
        default:
switchD_140131dc6_caseD_1:
          uVar7 = 0;
          break;
        case 6:
          uVar7 = local_188;
          break;
        case 0xf:
          iVar3 = (int)((ulonglong)local_188 >> 0x20);
          if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140131dc6_caseD_1;
        case 0:
        case 7:
        case 10:
        case 0xd:
          uVar4 = FUN_140e4a8b0(&local_188);
          uVar7 = FUN_140e87250(uVar4);
        }
        puVar5 = &local_c8;
        FUN_140e63610(uVar7,local_res10,&local_1d8,0,puVar5,0);
      }
    }
  }
  uVar4 = (undefined4)((ulonglong)puVar5 >> 0x20);
  local_1a8 = 0x63c;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a058c8);
  plVar1 = local_res8;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_16c = 6;
  local_178 = plVar1;
  uVar11 = FUN_140e5c910();
  FUN_140e42c10(uVar11,plVar1);
  local_f8 = &local_178;
  uVar11 = FUN_140e634e0(local_res8,local_res10,&local_1d8,1,CONCAT44(uVar4,DAT_141a04a48),&local_f8
                        );
  FUN_140e98ef0(local_res8,local_res10,pplVar9,uVar7,uVar11);
  uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
  local_1a8 = 0x63d;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  pplVar8 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a05cd8);
  if (pplVar8 != &local_178) {
    local_1c8 = *(undefined4 *)pplVar8;
    uStack_1c4 = *(undefined4 *)((longlong)pplVar8 + 4);
    uStack_1c0 = *(undefined4 *)(pplVar8 + 1);
    uStack_1bc = *(undefined4 *)((longlong)pplVar8 + 0xc);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1c8);
  }
  plVar1 = local_res8;
  local_f8 = &local_178;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 6;
  local_168 = plVar1;
  uVar7 = FUN_140e5c910();
  FUN_140e42c10(uVar7,plVar1);
  local_f0 = &local_168;
  uVar7 = CONCAT44(uVar4,DAT_1419fe568);
  FUN_140e634e0(local_res8,local_res10,&local_1d8,2,uVar7,&local_f8);
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_1a8 = 0x63e;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  pplVar8 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a058c8);
  pplVar9 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a05b78);
  if (pplVar9 != &local_178) {
    local_1c8 = *(undefined4 *)pplVar9;
    uStack_1c4 = *(undefined4 *)((longlong)pplVar9 + 4);
    uStack_1c0 = *(undefined4 *)(pplVar9 + 1);
    uStack_1bc = *(undefined4 *)((longlong)pplVar9 + 0xc);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1c8);
  }
  local_f8 = &local_178;
  if (pplVar8 != &local_168) {
    local_1c8 = *(undefined4 *)pplVar8;
    uStack_1c4 = *(undefined4 *)((longlong)pplVar8 + 4);
    uStack_1c0 = *(undefined4 *)(pplVar8 + 1);
    uStack_1bc = *(undefined4 *)((longlong)pplVar8 + 0xc);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1c8);
  }
  local_f0 = &local_168;
  FUN_140e634e0(local_res8,local_res10,&local_1d8,2,CONCAT44(uVar4,DAT_1419fe568),&local_f8);
LAB_140132110:
  plVar1 = local_res8;
  local_1a8 = 0x641;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = plVar1;
  uVar7 = FUN_140e5c910();
  FUN_140e42c10(uVar7,plVar1);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(&local_178,0x10,4,FUN_140041b30);
  if (0 < (int)local_a8[0]) {
    puVar5 = local_a0;
    do {
      puVar6 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_140e4cd60(local_a0);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return param_3;
}

