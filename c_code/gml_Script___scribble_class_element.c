// gml_Script___scribble_class_element @ 0x14013a970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___scribble_class_element(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 **ppuVar12;
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
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  byte local_84;
  undefined8 local_80;
  byte local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  
  local_e0 = 
  "gml_Script___update_scale_to_box_scale@anon@63750@__scribble_class_element@__scribble_class_element"
  ;
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x749;
  _eh_vector_constructor_iterator_(&local_90,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x74b;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a053a8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_d8 = 0x74b;
    goto LAB_14013b5c4;
  }
  local_d8 = 0x74c;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a053a8);
  uStack_13c = 0xd;
  local_148 = 0;
  if (&local_148 != puVar5) {
    local_108 = 0;
    uStack_100 = uStack_140;
    uStack_fc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_108);
  }
  local_d8 = 0x74e;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ac8);
  local_148 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_140 = uRam00000001419df7c8;
  uStack_13c = uRam00000001419df7cc;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  FUN_140041b80(&local_90,&local_148);
  local_b0 = &local_90;
  puVar5 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_138,1,uVar4,&local_b0);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar5 != &local_118) {
    local_148 = *puVar5;
    uStack_140 = *(undefined4 *)(puVar5 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
  }
  local_d8 = 0x74f;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  local_b0 = &local_118;
  ppuVar12 = &local_b0;
  puVar5 = (undefined8 *)CONCAT44(uVar3,DAT_1419fcb88);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_138,1,puVar5,ppuVar12);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_d8 = 0x74f;
    if (param_3 != &DAT_1419df7b0) {
      local_148 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_140 = DAT_1419df7b8;
      uStack_13c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_148);
    }
    goto LAB_14013b5c4;
  }
  local_d8 = 0x751;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  local_b4 = 0;
  local_c0 = 0x3ff0000000000000;
  local_d8 = 0x752;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  local_c4 = 0;
  local_d0 = 0x3ff0000000000000;
  local_d8 = 0x753;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a060c8);
  uStack_13c = 0;
  local_148 = 0;
  iVar2 = FUN_140e851f0(uVar4,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (0 < iVar2) {
    local_d8 = 0x753;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a060c8);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05758);
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a054e8);
    FUN_140e87440(&local_118,DAT_141a05608,0x80000000,&local_60,
                  (ulonglong)puVar5 & 0xffffffffffffff00,(ulonglong)ppuVar12 & 0xffffffffffffff00);
    switch(local_10c) {
    default:
switchD_14013ade9_caseD_1:
      uVar8 = 0;
      break;
    case 6:
      uVar8 = local_118;
      break;
    case 0xf:
      iVar2 = (int)((ulonglong)local_118 >> 0x20);
      if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14013ade9_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar3 = FUN_140e4a8b0(&local_118);
      uVar8 = FUN_140e87250(uVar3);
    }
    ppuVar12 = (undefined8 **)0x0;
    puVar5 = &local_60;
    puVar9 = (undefined8 *)FUN_140e63610(uVar8,param_2,&local_138,0,puVar5,0);
    local_11c = *(undefined4 *)((longlong)puVar9 + 0xc);
    local_120 = *(undefined4 *)(puVar9 + 1);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
      local_128 = *puVar9;
    }
    else {
      FUN_1400419b0(&local_128,puVar9);
    }
    FUN_1400460e0(&local_128,uVar4);
    uStack_13c = local_11c;
    uStack_140 = local_120;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
      local_148 = local_128;
    }
    else {
      FUN_1400419b0(&local_148,&local_128);
    }
    FUN_1400460e0(&local_148,uVar7);
    uStack_fc = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_100 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
      local_108 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_108,puVar6);
    }
    FUN_140046500(&local_108,&local_148);
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_f8);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
  }
  local_d8 = 0x754;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05038);
  uStack_13c = 0;
  local_148 = 0;
  iVar2 = FUN_140e851f0(uVar4,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (0 < iVar2) {
    local_d8 = 0x754;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05038);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05618);
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05408);
    FUN_140e87440(&local_118,DAT_141a05b08,0x80000000,&local_70,
                  (ulonglong)puVar5 & 0xffffffffffffff00,(ulonglong)ppuVar12 & 0xffffffffffffff00);
    switch(local_10c) {
    default:
switchD_14013b0ca_caseD_1:
      uVar8 = 0;
      break;
    case 6:
      uVar8 = local_118;
      break;
    case 0xf:
      iVar2 = (int)((ulonglong)local_118 >> 0x20);
      if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14013b0ca_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar3 = FUN_140e4a8b0(&local_118);
      uVar8 = FUN_140e87250(uVar3);
    }
    puVar5 = (undefined8 *)FUN_140e63610(uVar8,param_2,&local_138,0,&local_70,0);
    local_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    local_120 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
      local_128 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_128,puVar5);
    }
    FUN_1400460e0(&local_128,uVar4);
    uStack_fc = local_11c;
    uStack_100 = local_120;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
      local_108 = local_128;
    }
    else {
      FUN_1400419b0(&local_108,&local_128);
    }
    FUN_1400460e0(&local_108,uVar7);
    uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_140 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
      local_148 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_148,puVar6);
    }
    FUN_140046500(&local_148,&local_108);
    local_f8 = (undefined4)local_148;
    uStack_f4 = local_148._4_4_;
    uStack_f0 = uStack_140;
    uStack_ec = uStack_13c;
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    FUN_140041b80(&local_d0,&local_f8);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
  }
  local_d8 = 0x756;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05e18);
  if (puVar5 != &local_a0) {
    local_f8 = *(undefined4 *)puVar5;
    uStack_f4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_f0 = *(undefined4 *)(puVar5 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_f8);
  }
  local_d8 = 0x757;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar10 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05e18);
  local_b0 = &local_c0;
  local_a8 = &local_d0;
  FUN_140e609c0(param_1);
  puVar11 = (undefined4 *)FUN_140e79230(&local_138,2,&local_b0);
  if (puVar11 != puVar10) {
    local_f8 = *puVar11;
    uStack_f4 = puVar11[1];
    uStack_f0 = puVar11[2];
    uStack_ec = puVar11[3];
    if ((1 << ((byte)puVar10[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_f8);
  }
  FUN_140e60910(1);
  local_d8 = 0x758;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a053c8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_d8 = 0x758;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05e18);
    puVar10 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05e18);
    local_f8 = _DAT_1419e1d80;
    uStack_f4 = uRam00000001419e1d84;
    uStack_f0 = uRam00000001419e1d88;
    uStack_ec = uRam00000001419e1d8c;
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_f8);
    local_b0 = &local_90;
    if (puVar5 != &local_80) {
      local_f8 = *(undefined4 *)puVar5;
      uStack_f4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_f0 = *(undefined4 *)(puVar5 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      FUN_140041b80(&local_80,&local_f8);
    }
    local_a8 = &local_80;
    FUN_140e609c0(param_1);
    puVar11 = (undefined4 *)FUN_140e79230(&local_138,2,&local_b0);
    if (puVar11 != puVar10) {
      local_f8 = *puVar11;
      uStack_f4 = puVar11[1];
      uStack_f0 = puVar11[2];
      uStack_ec = puVar11[3];
      if ((1 << ((byte)puVar10[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      FUN_140041b80(puVar10,&local_f8);
    }
    FUN_140e60910(1);
  }
  local_d8 = 0x75a;
  iVar2 = FUN_140e851f0(puVar5,&local_a0,DAT_141955260,0);
  if (iVar2 != 0) {
    local_d8 = 0x75c;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a05e18);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04d88);
    uStack_13c = 0xd;
    local_148 = 0x3ff0000000000000;
    if (&local_148 != puVar5) {
      local_f8 = 0;
      uStack_f4 = 0x3ff00000;
      uStack_f0 = uStack_140;
      uStack_ec = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_f8);
    }
    local_d8 = 0x75d;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04dd8);
    uStack_13c = 0xd;
    local_148 = 0x3ff0000000000000;
    if (&local_148 != puVar5) {
      local_f8 = 0;
      uStack_f4 = 0x3ff00000;
      uStack_f0 = uStack_140;
      uStack_ec = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_f8);
    }
  }
LAB_14013b5c4:
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(&local_90,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

