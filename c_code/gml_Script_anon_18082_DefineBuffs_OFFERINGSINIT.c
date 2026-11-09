// gml_Script_anon_18082_DefineBuffs_OFFERINGSINIT @ 0x1403d71e0

undefined8 *
gml_Script_anon_18082_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *local_res18;
  undefined4 local_res20;
  undefined4 uVar2;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_res20 = 0;
  local_40 = "gml_Script_anon@17913@DefineBuffs@OFFERINGSINIT";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x2e4;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x2e5;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uStack_7c = *(undefined4 *)((longlong)param_5 + 0xc);
  uStack_80 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *param_5;
  }
  else {
    FUN_1400419b0(&local_88);
  }
  local_res20 = 1;
  uStack_5c = 7;
  local_68 = 2;
  FUN_140042560(&local_88,&local_68);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = (undefined4)local_88;
  uStack_64 = local_88._4_4_;
  uStack_60 = uStack_80;
  uStack_5c = uStack_7c;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_68);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_38 = 0x2e7;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_res18 = &local_78;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_98,1,CONCAT44(uVar2,DAT_1419fcb18),&local_res18);
  if (puVar1 != param_3) {
    local_68 = *(undefined4 *)puVar1;
    uStack_64 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_60 = *(undefined4 *)(puVar1 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

