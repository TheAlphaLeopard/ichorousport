// gml_Script_anon_21428_DefineBuffs_OFFERINGSINIT @ 0x1403dc120

undefined8 *
gml_Script_anon_21428_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [12];
  byte local_44;
  
  local_80 = "gml_Script_anon@20559@DefineBuffs@OFFERINGSINIT";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x359;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x35b;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uStack_bc = *(undefined4 *)((longlong)param_5 + 0xc);
  uStack_c0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  uStack_9c = 0;
  local_a8 = 0x4000000000000000;
  FUN_140046500(&local_c8,&local_a8);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = local_c8;
  uStack_a0 = uStack_c0;
  uStack_9c = uStack_bc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_a8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_68 = local_50;
  uVar3 = CONCAT44(uVar4,DAT_1419fe728);
  uVar1 = FUN_140e634e0(param_1,param_2,&local_b8,1,uVar3,&local_68);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_bc = 0;
  local_c8 = 0x4000000000000000;
  FUN_1400460e0(&local_c8,uVar1);
  local_a8 = local_c8;
  uStack_a0 = uStack_c0;
  uStack_9c = uStack_bc;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_a8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_78 = 0x35d;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_70 = &local_98;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar4,DAT_1419fcb18),&local_70);
  if (puVar2 != param_3) {
    local_a8 = *puVar2;
    uStack_a0 = *(undefined4 *)(puVar2 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

