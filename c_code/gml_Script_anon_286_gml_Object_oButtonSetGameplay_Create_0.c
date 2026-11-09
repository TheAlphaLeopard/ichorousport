// gml_Script_anon_286_gml_Object_oButtonSetGameplay_Create_0 @ 0x1408761a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_286_gml_Object_oButtonSetGameplay_Create_0
               (longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  ulonglong in_stack_fffffffffffffef0;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_70 = "gml_Object_oButtonSetGameplay_Create_0";
  local_68 = 0;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  uStack_2c = 0xffffff;
  local_38 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_68 = 2;
  FUN_140e98b30(param_1,param_2);
  local_68 = 4;
  puVar2 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f61e8);
  if (puVar2 != &DAT_141dd7228) {
    local_f8 = CONCAT44(uRam0000000141dd722c,_DAT_141dd7228);
    uStack_f0 = uRam0000000141dd7230;
    uStack_ec = DAT_141dd7234;
    if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_f8);
  }
  local_68 = 5;
  puVar2 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d828);
  if (puVar2 != &DAT_141dd7228) {
    local_f8 = CONCAT44(uRam0000000141dd722c,_DAT_141dd7228);
    uStack_f0 = uRam0000000141dd7230;
    uStack_ec = DAT_141dd7234;
    if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_f8);
  }
  local_68 = 6;
  puVar2 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f93d8);
  if (puVar2 != &DAT_141dd7188) {
    local_f8 = CONCAT44(uRam0000000141dd718c,_DAT_141dd7188);
    uStack_f0 = uRam0000000141dd7190;
    uStack_ec = DAT_141dd7194;
    if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_f8);
  }
  local_68 = 7;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d5d8);
  uStack_ec = 0xd;
  local_f8 = 0;
  if (&local_f8 != puVar3) {
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = uStack_f0;
    uStack_fc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_108);
  }
  local_68 = 9;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d3b8);
  FUN_140e87440(uVar1,DAT_1419ef468,0x80000000,&local_38,(ulonglong)pcVar5 & 0xffffffffffffff00,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  FUN_140e609c0(param_1);
  if (&local_38 != puVar3) {
    local_108 = (undefined4)local_38;
    uStack_104 = local_38._4_4_;
    uStack_100 = uStack_30;
    uStack_fc = uStack_2c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_108);
  }
  FUN_140e60910(1);
  local_68 = 0xb;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d938);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_f8,gml_Script_anon_411_gml_Object_oButtonSetGameplay_Create_0,param_1);
  if (&local_f8 != puVar3) {
    local_108 = (undefined4)local_f8;
    uStack_104 = local_f8._4_4_;
    uStack_100 = uStack_f0;
    uStack_fc = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e60910(1);
  local_68 = 0xf;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55560);
  local_108 = _DAT_141dd71c8;
  uStack_104 = uRam0000000141dd71cc;
  uStack_100 = uRam0000000141dd71d0;
  uStack_fc = DAT_141dd71d4;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_108);
  local_60 = local_c8;
  local_108 = (undefined4)DAT_1419df7b0;
  uStack_104 = DAT_1419df7b0._4_4_;
  uStack_100 = DAT_1419df7b8;
  uStack_fc = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_108);
  local_58 = local_b8;
  local_108 = _DAT_141dd7208;
  uStack_104 = uRam0000000141dd720c;
  uStack_100 = uRam0000000141dd7210;
  uStack_fc = DAT_141dd7214;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_108);
  local_50 = local_a8;
  puVar4 = (undefined4 *)gml_Script____struct___106(param_1,param_2,&local_e8,2,&local_60);
  if (puVar4 != local_98) {
    local_108 = *puVar4;
    uStack_104 = puVar4[1];
    uStack_100 = puVar4[2];
    uStack_fc = puVar4[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_108);
  }
  local_48 = local_98;
  FUN_140e645a0(&local_f8,gml_Script_anon_530_gml_Object_oButtonSetGameplay_Create_0,param_1);
  local_108 = (undefined4)local_f8;
  uStack_104 = local_f8._4_4_;
  uStack_100 = uStack_f0;
  uStack_fc = uStack_ec;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_108);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_40 = local_88;
  FUN_140e63610(param_1,param_2,&local_d8,3,uVar1,&local_50);
  local_68 = 0x12;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_108 = _DAT_141dd7198;
  uStack_104 = uRam0000000141dd719c;
  uStack_100 = uRam0000000141dd71a0;
  uStack_fc = DAT_141dd71a4;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_108);
  local_60 = local_c8;
  local_108 = (undefined4)DAT_1419df7b0;
  uStack_104 = DAT_1419df7b0._4_4_;
  uStack_100 = DAT_1419df7b8;
  uStack_fc = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_108);
  local_58 = local_b8;
  local_108 = _DAT_141dd7218;
  uStack_104 = uRam0000000141dd721c;
  uStack_100 = uRam0000000141dd7220;
  uStack_fc = DAT_141dd7224;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_108);
  local_50 = local_a8;
  puVar4 = (undefined4 *)gml_Script____struct___106(param_1,param_2,&local_e8,2,&local_60);
  if (puVar4 != local_98) {
    local_108 = *puVar4;
    uStack_104 = puVar4[1];
    uStack_100 = puVar4[2];
    uStack_fc = puVar4[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_108);
  }
  local_48 = local_98;
  FUN_140e645a0(&local_f8,gml_Script_anon_648_gml_Object_oButtonSetGameplay_Create_0,param_1);
  local_108 = (undefined4)local_f8;
  uStack_104 = local_f8._4_4_;
  uStack_100 = uStack_f0;
  uStack_fc = uStack_ec;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_108);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_40 = local_88;
  FUN_140e63610(param_1,param_2,&local_d8,3,uVar1,&local_50);
  local_68 = 0x15;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_108 = _DAT_141dd71b8;
  uStack_104 = uRam0000000141dd71bc;
  uStack_100 = uRam0000000141dd71c0;
  uStack_fc = DAT_141dd71c4;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_108);
  local_60 = local_c8;
  local_108 = (undefined4)DAT_1419df7b0;
  uStack_104 = DAT_1419df7b0._4_4_;
  uStack_100 = DAT_1419df7b8;
  uStack_fc = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_108);
  local_58 = local_b8;
  local_108 = _DAT_141dd71a8;
  uStack_104 = uRam0000000141dd71ac;
  uStack_100 = uRam0000000141dd71b0;
  uStack_fc = DAT_141dd71b4;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_108);
  local_50 = local_a8;
  puVar4 = (undefined4 *)gml_Script____struct___106(param_1,param_2,&local_e8,2,&local_60);
  if (puVar4 != local_98) {
    local_108 = *puVar4;
    uStack_104 = puVar4[1];
    uStack_100 = puVar4[2];
    uStack_fc = puVar4[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_108);
  }
  local_48 = local_98;
  FUN_140e645a0(&local_f8,gml_Script_anon_723_gml_Object_oButtonSetGameplay_Create_0,param_1);
  local_108 = (undefined4)local_f8;
  uStack_104 = local_f8._4_4_;
  uStack_100 = uStack_f0;
  uStack_fc = uStack_ec;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_108);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_40 = local_88;
  FUN_140e63610(param_1,param_2,&local_d8,3,uVar1,&local_50);
  local_68 = 0x18;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_108 = _DAT_141dd71f8;
  uStack_104 = uRam0000000141dd71fc;
  uStack_100 = uRam0000000141dd7200;
  uStack_fc = DAT_141dd7204;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_108);
  local_60 = local_c8;
  local_108 = (undefined4)DAT_1419df7b0;
  uStack_104 = DAT_1419df7b0._4_4_;
  uStack_100 = DAT_1419df7b8;
  uStack_fc = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_108);
  local_58 = local_b8;
  local_108 = _DAT_141dd71d8;
  uStack_104 = uRam0000000141dd71dc;
  uStack_100 = uRam0000000141dd71e0;
  uStack_fc = DAT_141dd71e4;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_108);
  local_50 = local_a8;
  puVar4 = (undefined4 *)gml_Script____struct___106(param_1,param_2,&local_e8,2,&local_60);
  if (puVar4 != local_98) {
    local_108 = *puVar4;
    uStack_104 = puVar4[1];
    uStack_100 = puVar4[2];
    uStack_fc = puVar4[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_108);
  }
  local_48 = local_98;
  FUN_140e645a0(&local_f8,gml_Object_oButtonSetPalette_Create_0,param_1);
  local_108 = (undefined4)local_f8;
  uStack_104 = local_f8._4_4_;
  uStack_100 = uStack_f0;
  uStack_fc = uStack_ec;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_108);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_40 = local_88;
  FUN_140e63610(param_1,param_2,&local_d8,3,uVar1,&local_50);
  local_68 = 0x1c;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d328);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_f8,gml_Script_anon_226_gml_Object_oButtonSetPalette_Create_0,param_1);
  if (&local_f8 != puVar3) {
    local_108 = (undefined4)local_f8;
    uStack_104 = local_f8._4_4_;
    uStack_100 = uStack_f0;
    uStack_fc = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return;
}

