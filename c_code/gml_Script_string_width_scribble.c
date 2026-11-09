// gml_Script_string_width_scribble @ 0x1405d9090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_string_width_scribble
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
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined8 **ppuVar12;
  ulonglong in_stack_fffffffffffffe40;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  byte local_4c;
  undefined1 local_48 [12];
  byte local_3c;
  undefined8 local_38;
  byte local_2c;
  
  local_b0 = "gml_Script_string_width_scribble_ext";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 8;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_78,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_11c = 0;
  local_128 = 0;
  local_18c = 0;
  local_198 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0c28) &&
     (_Init_thread_header(&DAT_141de0c28), DAT_141de0c28 == -1)) {
    DAT_141de0c30 = (longlong *)FUN_140e63aa0(DAT_1419ff518);
    _Init_thread_footer(&DAT_141de0c28);
  }
  if (DAT_141ddc1a5 == '\0') {
    FUN_140e64380(DAT_141de0c30,"gml_Script_string_width_scribble_ext");
    FUN_140e64380(param_1,"gml_Script_string_width_scribble_ext");
  }
  bVar2 = false;
  bVar1 = true;
  local_a8 = 10;
  if (DAT_141ddc1a5 == '\0') {
    DAT_141ddc1a5 = '\x01';
    puVar6 = (undefined8 *)(**(code **)(*DAT_141de0c30 + 0x10))(DAT_141de0c30,DAT_141a04cd8);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    local_148 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_140 = DAT_1419df7b8;
    uStack_13c = DAT_1419df7bc;
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140041b80(&local_58,&local_148);
    local_90 = &local_58;
    ppuVar10 = &local_90;
    uVar7 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_1b8,1,ppuVar10);
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_141a05158,0x80000000,&local_f8,uVar11,
                  in_stack_fffffffffffffe40 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar11 >> 0x20);
    FUN_140e609c0(DAT_141de0c30);
    if (&local_f8 != puVar6) {
      local_148 = local_f8;
      uStack_140 = uStack_f0;
      uStack_13c = uStack_ec;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_148);
    }
    FUN_140e60910(1);
  }
  local_a8 = 0xc;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uVar7 = CONCAT44(uVar5,DAT_141a04ae8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b8,0,uVar7,0);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar6 != &local_158) {
    local_148 = *puVar6;
    uStack_140 = *(undefined4 *)(puVar6 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_148);
  }
  local_a8 = 0xd;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  local_a0 = &local_158;
  ppuVar10 = &local_a0;
  uVar11 = CONCAT44(uVar5,DAT_141a08638);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_1b8,1,uVar11,ppuVar10);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 == '\0') {
    uVar7 = (**(code **)(*DAT_141de0c30 + 8))(DAT_141de0c30,DAT_141a04cd8);
    ppuVar10 = (undefined8 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
    FUN_140e87440(uVar7,DAT_141a04d28,0x80000000,&local_118,uVar11 & 0xffffffffffffff00,ppuVar10);
    uStack_13c = local_10c;
    uStack_140 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_148 = local_118;
    }
    else {
      FUN_1400419b0(&local_148,&local_118);
    }
    puVar6 = &local_148;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_90 = &local_158;
    ppuVar10 = &local_90;
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,1,DAT_141a08608,ppuVar10);
    local_fc = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_100 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_108 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_108,puVar6);
    }
    puVar6 = &local_108;
  }
  local_1a8 = *(undefined4 *)puVar6;
  uStack_1a4 = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_1a0 = *(undefined4 *)(puVar6 + 1);
  uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_1a8);
  if ((bVar1) && ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_108);
  }
  if ((bVar2) && ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_148);
  }
  local_a8 = 0xf;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar8 = &DAT_1419df7b0;
LAB_1405d9687:
    local_1a8 = *(undefined4 *)puVar8;
    uStack_1a4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_1a0 = *(undefined4 *)(puVar8 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_1a8);
  }
  else {
    puVar8 = (undefined8 *)*param_5;
    if (puVar8 != &local_78) goto LAB_1405d9687;
  }
  local_a0 = &local_78;
  local_1a8 = (undefined4)DAT_1419df7b0;
  uStack_1a4 = DAT_1419df7b0._4_4_;
  uStack_1a0 = DAT_1419df7b8;
  uStack_19c = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_1a8);
  local_98 = local_68;
  ppuVar12 = &local_a0;
  puVar8 = (undefined8 *)gml_Script_seg_add(param_1,param_2,&local_1b8,2,ppuVar12);
  if (puVar8 != &local_168) {
    local_1a8 = *(undefined4 *)puVar8;
    uStack_1a4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_1a0 = *(undefined4 *)(puVar8 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1a8);
  }
  FUN_140e87440(&local_168,DAT_141a05db8,0x80000000,&local_c8,
                (ulonglong)ppuVar12 & 0xffffffffffffff00,(ulonglong)ppuVar10 & 0xffffffffffffff00);
  local_90 = &local_158;
  local_1a8 = _DAT_1419e69c0;
  uStack_1a4 = uRam00000001419e69c4;
  uStack_1a0 = uRam00000001419e69c8;
  uStack_19c = uRam00000001419e69cc;
  if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_48);
  }
  FUN_140041b80(local_48,&local_1a8);
  local_88 = local_48;
  switch(local_15c) {
  default:
switchD_1405d97e0_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_168;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_168 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1405d97e0_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_168);
    uVar7 = FUN_140e87250(uVar5);
  }
  ppuVar10 = &local_90;
  puVar8 = &local_c8;
  puVar9 = (undefined8 *)FUN_140e63610(uVar7,param_2,&local_128,2,puVar8,ppuVar10);
  if (puVar9 != &local_178) {
    local_1a8 = *(undefined4 *)puVar9;
    uStack_1a4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_1a0 = *(undefined4 *)(puVar9 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1a8);
  }
  FUN_140e87440(&local_178,DAT_141a05c08,0x80000000,&local_d8,(ulonglong)puVar8 & 0xffffffffffffff00
                ,(ulonglong)ppuVar10 & 0xffffffffffffff00);
  if ((param_4 < 2) || (puVar6 = (undefined8 *)param_5[1], puVar6 != &local_38)) {
    local_1a8 = *(undefined4 *)puVar6;
    uStack_1a4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_1a0 = *(undefined4 *)(puVar6 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_2c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_38);
    }
    FUN_140041b80(&local_38,&local_1a8);
  }
  local_80 = &local_38;
  switch(local_16c) {
  default:
switchD_1405d9902_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_178;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_178 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1405d9902_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_178);
    uVar7 = FUN_140e87250(uVar5);
  }
  ppuVar10 = &local_80;
  puVar6 = &local_d8;
  puVar8 = (undefined8 *)FUN_140e63610(uVar7,param_2,&local_198,1,puVar6,ppuVar10);
  if (puVar8 != &local_188) {
    local_1a8 = *(undefined4 *)puVar8;
    uStack_1a4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_1a0 = *(undefined4 *)(puVar8 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1a8);
  }
  FUN_140e87440(&local_188,DAT_141a04df8,0x80000000,&local_e8,(ulonglong)puVar6 & 0xffffffffffffff00
                ,(ulonglong)ppuVar10 & 0xffffffffffffff00);
  switch(local_17c) {
  default:
switchD_1405d99ce_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_188;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_188 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_1405d99ce_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_188);
    uVar7 = FUN_140e87250(uVar5);
  }
  puVar6 = (undefined8 *)FUN_140e63610(uVar7,param_2,&local_138,0,&local_e8,0);
  if (puVar6 != param_3) {
    local_1a8 = *(undefined4 *)puVar6;
    uStack_1a4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_1a0 = *(undefined4 *)(puVar6 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1a8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

