// gml_Script_string_length_scribble @ 0x1405d8130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_string_length_scribble
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  undefined8 **ppuVar11;
  ulonglong in_stack_fffffffffffffe80;
  undefined8 **ppuVar12;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 local_68;
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 local_38 [12];
  byte local_2c;
  
  local_a0 = "gml_Script_string_height_scribble";
  local_a8 = DAT_141dc7a50;
  local_98 = 7;
  uVar5 = 1;
  DAT_141dc7a50 = &local_a8;
  _eh_vector_constructor_iterator_(&local_68,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_16c = 0;
  local_178 = 0;
  local_fc = 0;
  local_108 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0c1c) &&
     (_Init_thread_header(&DAT_141de0c1c), DAT_141de0c1c == -1)) {
    DAT_141de0c20 = (longlong *)FUN_140e63aa0(DAT_1419ff4b8);
    _Init_thread_footer(&DAT_141de0c1c);
  }
  if (DAT_141ddc1a4 == '\0') {
    FUN_140e64380(DAT_141de0c20,"gml_Script_string_height_scribble");
    FUN_140e64380(param_1,"gml_Script_string_height_scribble");
  }
  local_98 = 9;
  if (DAT_141ddc1a4 == '\0') {
    DAT_141ddc1a4 = '\x01';
    puVar6 = (undefined8 *)(**(code **)(*DAT_141de0c20 + 0x10))(DAT_141de0c20,DAT_141a04cd8);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_118 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_110 = DAT_1419df7b8;
    uStack_10c = DAT_1419df7bc;
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_118);
    local_88 = local_58;
    ppuVar9 = &local_88;
    uVar7 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_178,1,ppuVar9);
    uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_141a05158,0x80000000,&local_d8,uVar10,
                  in_stack_fffffffffffffe80 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar10 >> 0x20);
    FUN_140e609c0(DAT_141de0c20);
    if (&local_d8 != puVar6) {
      local_118 = local_d8;
      uStack_110 = uStack_d0;
      uStack_10c = uStack_cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_118);
    }
    FUN_140e60910(1);
  }
  local_98 = 0xb;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar7 = CONCAT44(uVar5,DAT_141a04ae8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,0,uVar7,0);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar6 != &local_138) {
    local_118 = *puVar6;
    uStack_110 = *(undefined4 *)(puVar6 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_118);
  }
  local_98 = 0xc;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  local_90 = &local_138;
  ppuVar12 = &local_90;
  uVar10 = CONCAT44(uVar5,DAT_141a08638);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar10,ppuVar12);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 == '\0') {
    uVar7 = (**(code **)(*DAT_141de0c20 + 8))(DAT_141de0c20,DAT_141a04cd8);
    ppuVar12 = (undefined8 **)((ulonglong)ppuVar12 & 0xffffffffffffff00);
    FUN_140e87440(uVar7,DAT_141a04d28,0x80000000,&local_f8,uVar10 & 0xffffffffffffff00,ppuVar12);
    uStack_10c = local_ec;
    uStack_110 = local_f0;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
      local_118 = local_f8;
    }
    else {
      FUN_1400419b0(&local_118,&local_f8);
    }
    puVar6 = &local_118;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_80 = &local_138;
    ppuVar12 = &local_80;
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,1,DAT_141a08608,ppuVar12);
    local_dc = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_e0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_e8 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_e8,puVar6);
    }
    puVar6 = &local_e8;
    bVar2 = false;
    bVar1 = true;
  }
  local_128 = *(undefined4 *)puVar6;
  uStack_124 = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_120 = *(undefined4 *)(puVar6 + 1);
  uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_128);
  if ((bVar1) && ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_e8);
  }
  if ((bVar2) && ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_118);
  }
  local_98 = 0xe;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
LAB_1405d86ea:
    local_128 = *(undefined4 *)param_5;
    uStack_124 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_120 = *(undefined4 *)(param_5 + 1);
    uStack_11c = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_128);
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 != &local_68) goto LAB_1405d86ea;
  }
  local_90 = &local_68;
  local_128 = (undefined4)DAT_1419df7b0;
  uStack_124 = DAT_1419df7b0._4_4_;
  uStack_120 = DAT_1419df7b8;
  uStack_11c = DAT_1419df7bc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_128);
  local_88 = local_58;
  ppuVar11 = &local_90;
  puVar6 = (undefined8 *)gml_Script_seg_add(param_1,param_2,&local_178,2,ppuVar11);
  if (puVar6 != &local_148) {
    local_128 = *(undefined4 *)puVar6;
    uStack_124 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_120 = *(undefined4 *)(puVar6 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_128);
  }
  FUN_140e87440(&local_148,DAT_141a05db8,0x80000000,&local_b8,
                (ulonglong)ppuVar11 & 0xffffffffffffff00,(ulonglong)ppuVar12 & 0xffffffffffffff00);
  local_80 = &local_138;
  local_128 = _DAT_1419e69b0;
  uStack_124 = uRam00000001419e69b4;
  uStack_120 = uRam00000001419e69b8;
  uStack_11c = uRam00000001419e69bc;
  if ((1 << (local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_38);
  }
  FUN_140041b80(local_38,&local_128);
  local_78 = local_38;
  switch(local_13c) {
  default:
switchD_1405d8829_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_148;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_148 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1405d8829_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_148);
    uVar7 = FUN_140e87250(uVar5);
  }
  ppuVar12 = &local_80;
  puVar6 = &local_b8;
  puVar8 = (undefined8 *)FUN_140e63610(uVar7,param_2,&local_108,2,puVar6,ppuVar12);
  if (puVar8 != &local_158) {
    local_128 = *(undefined4 *)puVar8;
    uStack_124 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_120 = *(undefined4 *)(puVar8 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_128);
  }
  FUN_140e87440(&local_158,DAT_141a05018,0x80000000,&local_c8,(ulonglong)puVar6 & 0xffffffffffffff00
                ,(ulonglong)ppuVar12 & 0xffffffffffffff00);
  switch(local_14c) {
  default:
switchD_1405d88f5_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_158;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_158 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1405d88f5_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_158);
    uVar7 = FUN_140e87250(uVar5);
  }
  puVar6 = (undefined8 *)FUN_140e63610(uVar7,param_2,&local_168,0,&local_c8,0);
  if (puVar6 != param_3) {
    local_128 = *(undefined4 *)puVar6;
    uStack_124 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_120 = *(undefined4 *)(puVar6 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_128);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_68,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

