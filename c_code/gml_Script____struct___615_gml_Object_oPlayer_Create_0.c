// gml_Script____struct___615_gml_Object_oPlayer_Create_0 @ 0x140beb0f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___615_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined4 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined4 *local_30;
  
  local_70 = "gml_Script_anon@334@gml_Object_oPlayer_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x1d;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_e8,0x10,7,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f86c8);
  local_11c = 0;
  local_128 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x1e;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7e48);
  uStack_12c = 0;
  local_138 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(puVar3,&local_138,DAT_141955260,0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar1 == 0) {
    local_68 = 0x1e;
  }
  else {
    local_68 = 0x20;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if (puVar3 != &local_e8) {
      local_138 = (undefined1 *)*puVar3;
      uStack_130 = *(undefined4 *)(puVar3 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_138);
    }
    local_60 = &local_e8;
    local_138 = (undefined1 *)CONCAT44(uRam0000000141dc7474,_DAT_141dc7470);
    uStack_130 = uRam0000000141dc7478;
    uStack_12c = uRam0000000141dc747c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_138);
    local_58 = &local_d8;
    local_138 = (undefined1 *)CONCAT44(uRam00000001419ecc14,_DAT_1419ecc10);
    uStack_130 = uRam00000001419ecc18;
    uStack_12c = uRam00000001419ecc1c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_138);
    local_50 = local_c8;
    uVar5 = CONCAT44(uVar6,DAT_1419f4a48);
    FUN_140e634e0(param_1,param_2,&local_128,3,uVar5,&local_60);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_68 = 0x21;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_138,gml_Script_anon_334_gml_Object_oPlayer_Create_0,0);
    if (&local_138 != puVar2) {
      local_118 = (undefined4)local_138;
      uStack_114 = local_138._4_4_;
      uStack_110 = uStack_130;
      uStack_10c = uStack_12c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_118);
    }
    FUN_140e60910(1);
    if (puVar2 != &local_e8) {
      local_118 = *(undefined4 *)puVar2;
      uStack_114 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_110 = *(undefined4 *)(puVar2 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_118);
    }
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_60 = &local_e8;
    if (puVar3 != &local_d8) {
      local_118 = *(undefined4 *)puVar3;
      uStack_114 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_110 = *(undefined4 *)(puVar3 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_118);
    }
    local_58 = &local_d8;
    uVar5 = CONCAT44(uVar6,DAT_1419fd6d8);
    puVar4 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_108,2,uVar5,&local_60);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar4 != local_c8) {
      local_118 = *puVar4;
      uStack_114 = puVar4[1];
      uStack_110 = puVar4[2];
      uStack_10c = puVar4[3];
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_118);
    }
    local_50 = local_c8;
    FUN_140e645a0(&local_138,gml_Script____struct___614_gml_Object_oPlayer_Create_0,param_1);
    local_118 = (undefined4)local_138;
    uStack_114 = local_138._4_4_;
    uStack_110 = uStack_130;
    uStack_10c = uStack_12c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_118);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_48 = local_b8;
    local_118 = _DAT_1419ece00;
    uStack_114 = uRam00000001419ece04;
    uStack_110 = uRam00000001419ece08;
    uStack_10c = uRam00000001419ece0c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_118);
    local_40 = local_a8;
    local_118 = _DAT_141dc7470;
    uStack_114 = uRam0000000141dc7474;
    uStack_110 = uRam0000000141dc7478;
    uStack_10c = uRam0000000141dc747c;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_118);
    local_38 = local_98;
    uVar5 = CONCAT44(uVar6,DAT_1419fed78);
    puVar4 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar5,&local_50);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar4 != local_88) {
      local_118 = *puVar4;
      uStack_114 = puVar4[1];
      uStack_110 = puVar4[2];
      uStack_10c = puVar4[3];
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_118);
    }
    local_30 = local_88;
    FUN_140e634e0(param_1,param_2,&local_128,3,CONCAT44(uVar6,DAT_1419f4dd8),&local_40);
    local_68 = 0x24;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7e48);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = &DAT_bff0000000000000;
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

