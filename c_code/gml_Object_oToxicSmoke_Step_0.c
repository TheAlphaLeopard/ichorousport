// gml_Object_oToxicSmoke_Step_0 @ 0x140dce330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oToxicSmoke_Step_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_ffffffffffffff30;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_80 = "gml_Script_anon@257@gml_Object_oToxicSmoke_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x15;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x17;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = *(undefined8 **)(param_5 + 8);
  }
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  FUN_140e87440(puVar3,DAT_141a1f4e0,0x80000000,&local_98,uVar5,
                in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar5 >> 0x20);
  iVar1 = FUN_140e851f0(&local_98,uVar2,DAT_141955260,0);
  if (iVar1 == 0) {
    local_78 = 0x19;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58110);
    uStack_ac = 0xd;
    local_b8 = 0x3ff0000000000000;
    if (&local_b8 != puVar3) {
      local_a8 = 0;
      uStack_a4 = 0x3ff00000;
      uStack_a0 = uStack_b0;
      uStack_9c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_a8);
    }
    local_78 = 0x1b;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    local_a8 = _DAT_1419ee3c0;
    uStack_a4 = uRam00000001419ee3c4;
    uStack_a0 = uRam00000001419ee3c8;
    uStack_9c = uRam00000001419ee3cc;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_a8);
    local_40 = local_70;
    local_a8 = _DAT_1419ee3d0;
    uStack_a4 = uRam00000001419ee3d4;
    uStack_a0 = uRam00000001419ee3d8;
    uStack_9c = uRam00000001419ee3dc;
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_a8);
    local_38 = local_60;
    FUN_140e645a0(&local_b8,gml_Object_oToxicSmoke_Alarm_0,param_1);
    local_a8 = (undefined4)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uStack_b0;
    uStack_9c = uStack_ac;
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_a8);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_30 = local_50;
    FUN_140e634e0(param_1,param_2,&local_c8,3,CONCAT44(uVar6,DAT_1419f4dd8),&local_40);
  }
  else {
    local_78 = 0x17;
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

