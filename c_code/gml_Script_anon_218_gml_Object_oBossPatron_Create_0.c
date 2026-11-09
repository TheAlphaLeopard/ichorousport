// gml_Script_anon_218_gml_Object_oBossPatron_Create_0 @ 0x1407a6770

void gml_Script_anon_218_gml_Object_oBossPatron_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong in_stack_ffffffffffffff98;
  ulonglong in_stack_ffffffffffffffa0;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oBossKillText_Draw_0";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef568);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_28 = 2;
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      local_28 = 4;
      if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_58);
      }
      local_58 = 0;
      local_50 = 0;
      local_4c = 5;
      uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08b28);
      FUN_140e87440(uVar2,DAT_1419ff478,0x80000000,&local_48,
                    in_stack_ffffffffffffff98 & 0xffffffffffffff00,
                    in_stack_ffffffffffffffa0 & 0xffffffffffffff00);
      uVar2 = FUN_140069500(uVar2);
      FUN_140e63610(uVar2,param_2,&local_58,0,&local_48,0);
      goto LAB_1407a68bf;
    }
  }
  local_28 = 2;
LAB_1407a68bf:
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

