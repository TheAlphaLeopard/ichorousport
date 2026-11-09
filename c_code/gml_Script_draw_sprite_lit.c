// gml_Script_draw_sprite_lit @ 0x1403b01d0

undefined8 * gml_Script_draw_sprite_lit(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *local_res8;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [3];
  byte local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@11387@___struct___137@pal_swap_init_system_light@lighting_system";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x154;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x155;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5248);
  if (puVar1 != local_58) {
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_48);
  }
  local_res8 = local_58;
  uVar2 = CONCAT44(uVar3,DAT_1419f4f78);
  FUN_140e634e0(param_1,param_2,&local_68,1,uVar2,&local_res8);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x156;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4f38);
  if (puVar1 != local_58) {
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_48);
  }
  local_res8 = local_58;
  uVar2 = CONCAT44(uVar3,DAT_1419f4f78);
  FUN_140e634e0(param_1,param_2,&local_68,1,uVar2,&local_res8);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = 0x157;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5398);
  if (puVar1 != local_58) {
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_48);
  }
  local_res8 = local_58;
  FUN_140e634e0(param_1,param_2,&local_68,1,CONCAT44(uVar3,DAT_141a01ab8),&local_res8);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

