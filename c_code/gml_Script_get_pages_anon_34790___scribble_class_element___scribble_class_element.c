// gml_Script_get_pages_anon_34790___scribble_class_element___scribble_class_element @ 0x140128000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_get_pages_anon_34790___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  
  local_100 = "gml_Script_page@anon@33811@__scribble_class_element@__scribble_class_element";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x412;
  _eh_vector_constructor_iterator_(&local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_13c = 0;
  local_148 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x414;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05148);
  if (puVar4 != &local_f0) {
    local_158 = *puVar4;
    uStack_150 = *(undefined4 *)(puVar4 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_158);
  }
  local_f8 = 0x416;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ac8);
  local_158 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_150 = uRam00000001419df7a8;
  uStack_14c = uRam00000001419df7ac;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_158);
  local_78 = &local_c8;
  puVar6 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_148,1,uVar5,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar6 != &local_128) {
    local_158 = *puVar6;
    uStack_150 = *(undefined4 *)(puVar6 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  local_f8 = 0x417;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  local_78 = &local_128;
  ppuVar9 = &local_78;
  uVar10 = CONCAT44(uVar3,DAT_1419fcb88);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar10,ppuVar9);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_f8 = 0x42a;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05148);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
    goto LAB_140128943;
  }
  local_f8 = 0x419;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*param_5;
  }
  uStack_12c = 0;
  local_138 = 0;
  iVar2 = FUN_140e851f0(puVar8,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 != -2 && iVar2 < 0) {
    local_f8 = 0x41b;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    local_158 = CONCAT44(uRam0000000141dcb75c,_DAT_141dcb758);
    uStack_150 = uRam0000000141dcb760;
    uStack_14c = DAT_141dcb764;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_158);
    local_70 = &local_b8;
    gml_Script___scribble_error(param_1,param_2,&local_118,1,&local_70);
    local_f8 = 0x41c;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05148);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
    goto LAB_140128943;
  }
  local_f8 = 0x41e;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  FUN_140e87440(&local_128,DAT_141a05528,0x80000000,&local_e0,uVar10 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  switch(local_11c) {
  default:
switchD_140128422_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_128;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_128 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140128422_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_128);
    uVar5 = FUN_140e87250(uVar3);
  }
  uVar10 = 0;
  puVar8 = &local_e0;
  puVar7 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_148,0,puVar8,0);
  uStack_12c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_130 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_138,puVar7);
  }
  uStack_14c = 7;
  local_158 = CONCAT44(local_158._4_4_,1);
  FUN_1400462a0(&local_138,&local_158);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  iVar2 = FUN_140e851f0(puVar7,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 < 1) {
    local_f8 = 0x425;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05148);
    FUN_140e609c0(param_1);
    if (0 < param_4) {
      puVar6 = (undefined8 *)*param_5;
    }
    if (puVar6 != puVar8) {
      local_158 = *puVar6;
      uStack_150 = *(undefined4 *)(puVar6 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_158);
    }
    FUN_140e60910(1);
    goto LAB_140128943;
  }
  local_f8 = 0x420;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05148);
  FUN_140e87440(&local_128,DAT_141a05528,0x80000000,&local_e0,(ulonglong)puVar8 & 0xffffffffffffff00
                ,uVar10 & 0xffffffffffffff00);
  FUN_140e609c0(param_1);
  switch(local_11c) {
  default:
switchD_1401285d5_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_128;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_128 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1401285d5_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_128);
    uVar5 = FUN_140e87250(uVar3);
  }
  puVar8 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_118,0,&local_e0,0);
  uStack_12c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_130 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar8;
  }
  else {
    FUN_1400419b0(&local_138,puVar8);
  }
  uStack_14c = 7;
  local_158 = CONCAT44(local_158._4_4_,1);
  FUN_1400462a0(&local_138,&local_158);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (&local_138 != puVar4) {
    local_158 = local_138;
    uStack_150 = uStack_130;
    uStack_14c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_158);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e60910(1);
  local_f8 = 0x421;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05148);
  local_158 = CONCAT44(uRam0000000141dcb70c,_DAT_141dcb708);
  uStack_150 = uRam0000000141dcb710;
  uStack_14c = DAT_141dcb714;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_158);
  local_78 = &local_c8;
  if ((param_4 < 1) || (puVar6 = (undefined8 *)*param_5, puVar6 != &local_b8)) {
    local_158 = *puVar6;
    uStack_150 = *(undefined4 *)(puVar6 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_158);
  }
  local_70 = &local_b8;
  local_158 = CONCAT44(uRam0000000141dcb64c,_DAT_141dcb648);
  uStack_150 = uRam0000000141dcb650;
  uStack_14c = DAT_141dcb654;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_158);
  local_68 = local_a8;
  if (puVar4 != &local_98) {
    local_158 = *puVar4;
    uStack_150 = *(undefined4 *)(puVar4 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_158);
  }
  local_60 = &local_98;
  local_158 = CONCAT44(uRam0000000141dcb6bc,_DAT_141dcb6b8);
  uStack_150 = uRam0000000141dcb6c0;
  uStack_14c = DAT_141dcb6c4;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_158);
  local_58 = local_88;
  gml_Script___scribble_error(param_1,param_2,&local_148,5,&local_78);
LAB_140128943:
  local_f8 = 0x42d;
  iVar2 = FUN_140e851f0(&local_f0,puVar4,DAT_141955260,0);
  if (iVar2 != 0) {
    local_f8 = 0x42d;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a05148);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04dd8);
    uStack_14c = 0xd;
    local_158 = 0x3ff0000000000000;
    if (&local_158 != puVar4) {
      local_138 = 0x3ff0000000000000;
      uStack_130 = uStack_150;
      uStack_12c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_138);
    }
  }
  local_f8 = 0x42f;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar5 = FUN_140e5c910();
  FUN_140e42c10(uVar5,param_1);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

