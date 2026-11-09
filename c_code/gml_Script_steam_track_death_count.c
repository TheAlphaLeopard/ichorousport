// gml_Script_steam_track_death_count @ 0x1405d5e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_steam_track_death_count
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 **in_stack_fffffffffffffed0;
  ulonglong uVar10;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  longlong local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  longlong *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  char *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_78 = "gml_Script_steam_achievment_set";
  local_80 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_80;
  local_70 = 1;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(&local_e8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_11c = 0;
  local_128 = 0;
  local_84 = 0;
  local_90 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_70 = 3;
  uStack_10c = 0xd;
  local_118 = 0;
  cVar1 = FUN_140e491e0(&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  plVar5 = &DAT_1419df7b0;
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if (param_4 < 1) {
      puVar7 = &DAT_1419df7b0;
LAB_1405d5f6b:
      local_118 = *puVar7;
      uStack_110 = *(undefined4 *)(puVar7 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_118);
    }
    else {
      puVar7 = (undefined8 *)*param_5;
      if (puVar7 != &local_d8) goto LAB_1405d5f6b;
    }
    local_b0 = &local_d8;
    in_stack_fffffffffffffed0 = &local_b0;
    uVar8 = CONCAT44(uVar3,DAT_1419febf8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar8,in_stack_fffffffffffffed0);
    uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') {
      local_70 = 4;
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      local_90 = 0;
      local_88 = 0;
      local_84 = 5;
      if (param_4 < 1) {
        puVar7 = &DAT_1419df7b0;
LAB_1405d6018:
        local_118 = *puVar7;
        uStack_110 = *(undefined4 *)(puVar7 + 1);
        uStack_10c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_118);
      }
      else {
        puVar7 = (undefined8 *)*param_5;
        if (puVar7 != &local_c8) goto LAB_1405d6018;
      }
      local_a8 = &local_c8;
      in_stack_fffffffffffffed0 = &local_a8;
      FUN_140e634e0(param_1,param_2,&local_90,1,CONCAT44(uVar3,DAT_1419febf8),
                    in_stack_fffffffffffffed0);
    }
  }
  local_70 = 6;
  local_5c = DAT_141dd4724;
  local_60 = DAT_141dd4720;
  if ((1 << ((byte)DAT_141dd4724 & 0x1f) & 0x46U) == 0) {
    local_68 = DAT_141dd4718;
  }
  else {
    FUN_1400419b0(&local_68,&DAT_141dd4718);
  }
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uVar6 = 1 << ((byte)local_5c & 0x1f) & 0x46;
  uStack_110 = local_60;
  uStack_10c = local_5c;
  if (uVar6 == 0) {
    local_118 = local_68;
  }
  else {
    FUN_1400419b0(&local_118,&local_68);
  }
  FUN_1400460e0(&local_118,puVar7);
  local_108 = (undefined8 *)local_118;
  uStack_100 = (char *)CONCAT44(uStack_10c,uStack_110);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140041b80(&local_58,&local_108);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (uVar6 != 0) {
    FUN_140041a50(&local_68);
  }
  local_70 = 7;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_108 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_100 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
  local_b8 = &local_58;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_108);
  local_b0 = &local_d8;
  uVar4 = gml_Script____struct___106(param_1,param_2,&local_128,2,&local_b8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_70 = 7;
    goto LAB_1405d65d7;
  }
  local_70 = 9;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_108 = (undefined8 *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_100 = (char *)CONCAT44(uRam00000001419df7cc,uRam00000001419df7c8);
  local_b8 = &local_58;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_108);
  local_b0 = &local_d8;
  uStack_100 = "gml_Script_savedata_set";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 8;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
  local_11c = 5;
  local_128 = 0;
  local_f8 = 10;
  FUN_140e98ef0(param_1,param_2,uVar4,local_b8,local_b0);
  DAT_141dc7a50 = local_108;
  local_70 = 10;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar9 = 0;
  gml_Script_settings_save(param_1,param_2,&local_128,0,0);
  local_70 = 0xc;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uStack_10c = 0xf;
  local_118 = 0x100000000000147;
  uVar10 = (ulonglong)in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_118,DAT_1419ff408,0x80000000,&local_a0,uVar9,uVar10);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e87440(&local_a0,DAT_1419ff478,0x80000000,&local_48,uVar9 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  if ((param_4 < 1) || (plVar5 = (longlong *)*param_5, plVar5 != &local_e8)) {
    local_108 = (undefined8 *)*plVar5;
    uStack_100 = (char *)plVar5[1];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_108);
  }
  local_b8 = &local_e8;
  switch(local_94) {
  default:
switchD_1405d645d_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_a0;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_a0 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1405d645d_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_a0);
    uVar4 = FUN_140e87250(uVar3);
  }
  puVar7 = &local_48;
  FUN_140e63610(uVar4,param_2,&local_128,1,puVar7,&local_b8);
  uVar3 = (undefined4)((ulonglong)puVar7 >> 0x20);
  local_70 = 0xd;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uStack_10c = 0xf;
  local_118 = 0x10000020000010a;
  local_108 = (undefined8 *)0x10000020000010a;
  uStack_100 = (char *)CONCAT44(0xf,uStack_110);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_108);
  local_b8 = &local_e8;
  local_108 = (undefined8 *)CONCAT44(uRam00000001419e6994,_DAT_1419e6990);
  uStack_100 = (char *)CONCAT44(uRam00000001419e699c,uRam00000001419e6998);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_108);
  local_b0 = &local_d8;
  local_108 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_100 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_108);
  local_a8 = &local_c8;
  FUN_140e634e0(param_1,param_2,&local_128,3,CONCAT44(uVar3,DAT_141a0a2e8),&local_b8);
LAB_1405d65d7:
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_80;
  return param_3;
}

