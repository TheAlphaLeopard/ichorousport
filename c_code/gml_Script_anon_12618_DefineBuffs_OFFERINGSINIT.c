// gml_Script_anon_12618_DefineBuffs_OFFERINGSINIT @ 0x1403ced90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_12618_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [12];
  byte local_3c;
  undefined1 local_38 [12];
  byte local_2c;
  
  local_80 = "gml_Script_anon@12444@DefineBuffs@OFFERINGSINIT";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x1eb;
  _eh_vector_constructor_iterator_(local_58,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x1ed;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uStack_8c = *(undefined4 *)((longlong)param_5 + 0xc);
  uStack_90 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *param_5;
  }
  else {
    FUN_1400419b0(&local_98);
  }
  uStack_bc = 0;
  local_c8 = 0x3fd999999999999a;
  FUN_140042560(&local_98,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = local_98;
  uStack_c0 = uStack_90;
  uStack_bc = uStack_8c;
  if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_48);
  }
  FUN_140041b80(local_48,&local_c8);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_68 = local_48;
  local_c8 = CONCAT44(uRam00000001419e4864,_DAT_1419e4860);
  uStack_c0 = uRam00000001419e4868;
  uStack_bc = uRam00000001419e486c;
  if ((1 << (local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_38);
  }
  FUN_140041b80(local_38,&local_c8);
  local_60 = local_38;
  ppuVar2 = &local_68;
  puVar1 = (undefined8 *)gml_Script_bm_string_width(param_1,param_2,&local_b8,2,ppuVar2);
  uVar3 = (undefined4)((ulonglong)ppuVar2 >> 0x20);
  if (puVar1 != &local_a8) {
    local_c8 = *puVar1;
    uStack_c0 = *(undefined4 *)(puVar1 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  local_78 = 0x1ee;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_70 = &local_a8;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar3,DAT_1419fcb18),&local_70);
  if (puVar1 != param_3) {
    local_c8 = *puVar1;
    uStack_c0 = *(undefined4 *)(puVar1 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

