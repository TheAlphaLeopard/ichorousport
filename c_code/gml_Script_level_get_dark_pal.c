// gml_Script_level_get_dark_pal @ 0x1403b6530

undefined8 * gml_Script_level_get_dark_pal(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_GlobalScript_lighting_system";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b00);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b60);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f53f8);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5098);
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5488);
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5358);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 1;
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_48 = 2;
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3ff0000000000000;
  local_48 = 4;
  FUN_140e609c0(DAT_141a729d8);
  if (puVar3 != &DAT_1419df7b0) {
    local_78 = (undefined4)DAT_1419df7b0;
    uStack_74 = DAT_1419df7b0._4_4_;
    uStack_70 = DAT_1419df7b8;
    uStack_6c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_78);
  }
  FUN_140e60910(1);
  local_48 = 5;
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_48 = 6;
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_48 = 7;
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_48 = 10;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5188);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_anon_1228____struct___136___new_lighting_system_lighting_system
                ,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x16;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f53b8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_anon_2489____struct___136___new_lighting_system_lighting_system
                ,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x23;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4fd8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_lighting_system_tilemap,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x122;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5108);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_lighting_system_sprite,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x127;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4fe8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_lighting_system_light,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 300;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f53c8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_draw_sprite_ext_lit,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x131;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f51f8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_draw_sprite_general_lit,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x137;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f50c8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,FUN_1403ae470,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x13b;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f50a8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,FUN_1403aecf0,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x140;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5278);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,FUN_1403afd30,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x145;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f54e8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_pal_fade_set,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x18c;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f54a8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_light_add,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x1af;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5078);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_light_flash_list,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x1d3;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5218);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script____struct___139_light_flash_create_lighting_system,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x1d8;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f53e8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script____struct___140_light_flash_create_lighting_system,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x1de;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5428);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_GlobalScript_MIXERINIT,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x1ea;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f52d8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,gml_Script_mixer_apply_db,param_1);
  if (&local_78 != puVar7) {
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

