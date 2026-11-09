// gml_Object_oSteam_Other_3 @ 0x140da0cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSteam_Other_3(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *local_res18;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oSteam_Create_0";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_28 = 2;
  uVar3 = CONCAT44(uVar4,DAT_1419febf8);
  FUN_140e634e0(param_1,param_2,&local_78,0,uVar3,0);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_28 = 4;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01308);
  local_48 = _DAT_141dc7790;
  uStack_44 = uRam0000000141dc7794;
  uStack_40 = uRam0000000141dc7798;
  uStack_3c = uRam0000000141dc779c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_48);
  local_res18 = local_58;
  FUN_140e609c0(param_1);
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_78,1,CONCAT44(uVar4,DAT_141a0a0d8),&local_res18);
  uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_60 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) == 0) {
    local_68 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_68,puVar2);
  }
  uStack_3c = 7;
  local_48 = 0x3c;
  FUN_140042560(&local_68,&local_48);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if (&local_68 != puVar1) {
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

