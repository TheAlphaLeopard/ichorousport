// gml_Script_anon_15930_gml_Object_oPlayer_Other_10 @ 0x140c74bd0

undefined8 *
gml_Script_anon_15930_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  code *pcVar9;
  undefined8 **ppuVar10;
  ulonglong in_stack_fffffffffffffe50;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  local_d0 = "gml_Script_anon@13742@gml_Object_oPlayer_Other_10";
  local_d8 = DAT_141dc7a50;
  local_c8 = 599;
  pcVar9 = FUN_140041b30;
  DAT_141dc7a50 = &local_d8;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_17c = 0;
  local_188 = 0;
  local_14c = 0;
  local_158 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x259;
  uStack_18c = 0xf;
  local_198 = (longlong *)0x100000000000014;
  FUN_140e87440(&local_198,DAT_1419f5978,0x80000000,&local_78,(ulonglong)pcVar9 & 0xffffffffffffff00
                ,in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  puVar7 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_140c74d61:
    local_1a8 = (longlong *)*puVar6;
    uStack_1a0 = *(undefined4 *)(puVar6 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1a8);
  }
  else {
    puVar6 = (undefined8 *)*param_5;
    if (puVar6 != &local_f8) goto LAB_140c74d61;
  }
  local_50 = &local_f8;
  if (param_4 < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_140c74db1:
    local_1a8 = (longlong *)*puVar6;
    uStack_1a0 = *(undefined4 *)(puVar6 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1a8);
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
    if (puVar6 != &local_e8) goto LAB_140c74db1;
  }
  local_48 = &local_e8;
  uStack_19c = 0xf;
  local_1a8 = (longlong *)0x100000000000014;
  uVar4 = FUN_140069500(&local_1a8);
  ppuVar10 = &local_50;
  puVar6 = &local_78;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_188,2,puVar6,ppuVar10);
  uStack_18c = 0;
  local_198 = (longlong *)&DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(uVar4,&local_198,DAT_141955260,0);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (iVar2 == 0) {
    FUN_140e85f80(param_1,DAT_1419f6b08,0x80000000,&local_88);
    uStack_19c = 0xf;
    local_1a8 = (longlong *)0x100000300000020;
    iVar2 = FUN_140e851f0(&local_88,&local_1a8,DAT_141955260,0);
    bVar8 = iVar2 == 0;
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
  }
  else {
    bVar8 = true;
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0xd;
  if (bVar8) {
    local_138 = 0x3ff0000000000000;
  }
  else {
    local_138 = 0;
  }
  local_c8 = 0x25b;
  cVar1 = FUN_140e491e0(&local_138);
  if (cVar1 == '\0') {
    local_c8 = 0x25f;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8c78);
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
LAB_140c7502b:
      local_1a8 = (longlong *)*puVar6;
      uStack_1a0 = *(undefined4 *)(puVar6 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_1a8);
    }
    else {
      puVar6 = (undefined8 *)*param_5;
      if (puVar6 != &local_128) goto LAB_140c7502b;
    }
    local_68 = &local_128;
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140c75078:
      local_1a8 = (longlong *)*puVar6;
      uStack_1a0 = *(undefined4 *)(puVar6 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_1a8);
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
      if (puVar6 != &local_118) goto LAB_140c75078;
    }
    local_60 = &local_118;
    ppuVar10 = &local_68;
    puVar6 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_188,2,uVar5,ppuVar10);
    if (puVar6 != &local_148) {
      local_1a8 = (longlong *)*puVar6;
      uStack_1a0 = *(undefined4 *)(puVar6 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_1a8);
    }
    local_c8 = 0x261;
    uStack_18c = DAT_141ddaa04;
    uStack_190 = DAT_141ddaa00;
    if ((1 << ((byte)DAT_141ddaa04 & 0x1f) & 0x46U) == 0) {
      local_198 = DAT_141dda9f8;
    }
    else {
      FUN_1400419b0(&local_198,&DAT_141dda9f8);
    }
    iVar2 = FUN_140e851f0(&local_148,&local_198,DAT_141955260,0);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if (iVar2 == 0) goto LAB_140c754da;
    local_c8 = 0x262;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uStack_19c = 6;
    local_1a8 = param_1;
    FUN_140e87440(&local_1a8,DAT_141a0a828,0x80000000,&local_a8,uVar5 & 0xffffffffffffff00,
                  (ulonglong)ppuVar10 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_18c = DAT_141dda9f4;
    uStack_190 = DAT_141dda9f0;
    if ((1 << ((byte)DAT_141dda9f4 & 0x1f) & 0x46U) == 0) {
      local_198 = DAT_141dda9e8;
    }
    else {
      FUN_1400419b0(&local_198,&DAT_141dda9e8);
    }
    uVar3 = uStack_18c;
    local_1a8 = local_198;
    uStack_1a0 = uStack_190;
    uStack_19c = uStack_18c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1a8);
    if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_68 = &local_128;
    if ((param_4 < 3) || (puVar7 = (undefined8 *)param_5[2], puVar7 != &local_118)) {
      local_1a8 = (longlong *)*puVar7;
      uStack_1a0 = *(undefined4 *)(puVar7 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_1a8);
    }
    local_60 = &local_118;
    local_58 = &local_148;
    local_1a8 = local_a8;
    uStack_1a0 = uStack_a0;
    uStack_19c = uStack_9c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1a8);
    local_50 = &local_f8;
    ppuVar10 = &local_68;
    puVar7 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_158,3,ppuVar10);
    uVar3 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
    if (puVar7 != &local_e8) {
      local_1a8 = (longlong *)*puVar7;
      uStack_1a0 = *(undefined4 *)(puVar7 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_1a8);
    }
    local_48 = &local_e8;
    ppuVar10 = &local_50;
    uVar5 = CONCAT44(uVar3,DAT_1419f8c88);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_188,2,uVar5,ppuVar10);
    if (puVar7 != &local_178) {
      local_1a8 = (longlong *)*puVar7;
      uStack_1a0 = *(undefined4 *)(puVar7 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1a8);
    }
    FUN_140e87440(&local_178,DAT_1419f4a98,0x80000000,&local_c0,uVar5 & 0xffffffffffffff00,
                  (ulonglong)ppuVar10 & 0xffffffffffffff00);
    switch(local_16c) {
    default:
switchD_140c7547f_caseD_1:
      uVar4 = 0;
      break;
    case 6:
      uVar4 = local_178;
      break;
    case 0xf:
      iVar2 = (int)((ulonglong)local_178 >> 0x20);
      if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140c7547f_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar3 = FUN_140e4a8b0(&local_178);
      uVar4 = FUN_140e87250(uVar3);
    }
    puVar7 = &local_c0;
    puVar6 = &local_168;
  }
  else {
    local_c8 = 0x25c;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f83c8);
    FUN_140e87440(uVar4,DAT_1419f4a98,0x80000000,&local_98,(ulonglong)puVar6 & 0xffffffffffffff00,
                  (ulonglong)ppuVar10 & 0xffffffffffffff00);
    uVar4 = FUN_140069500(uVar4);
    puVar7 = &local_98;
    puVar6 = &local_188;
  }
  FUN_140e63610(uVar4,param_2,puVar6,0,puVar7,0);
LAB_140c754da:
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

