// gml_Script_anon_2751____struct___473_gml_Object_oEnemyDireMutt_Create_0 @ 0x1409bc920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2751____struct___473_gml_Object_oEnemyDireMutt_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_ffffffffffffff30;
  undefined1 **ppuVar8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@2413@gml_Object_oEnemyDireMutt_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x76;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x77;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f0f48);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar3) {
    local_c8 = (longlong *)*param_5;
    uStack_c0 = *(undefined4 *)(param_5 + 1);
    uStack_bc = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
  FUN_140e60910(1);
  local_38 = 0x79;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uStack_bc = 6;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  local_c8 = param_1;
  FUN_140e87440(&local_c8,DAT_141a1b910,0x80000000,&local_58,uVar6,
                in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = (longlong *)CONCAT44(uRam0000000141dd89bc,_DAT_141dd89b8);
  uStack_c0 = uRam0000000141dd89c0;
  uStack_bc = DAT_141dd89c4;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_c8);
  local_68 = local_88;
  ppuVar8 = &local_68;
  uVar6 = CONCAT44(uVar7,DAT_141a1c640);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_a8,1,uVar6,ppuVar8);
  iVar2 = FUN_140e851f0(&local_58,uVar4,DAT_141955260,0);
  if (iVar2 == 0) {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0f48);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') goto LAB_1409bcb58;
    local_38 = 0x7a;
  }
  else {
LAB_1409bcb58:
    local_38 = 0x7b;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uStack_bc = 6;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_c8 = param_1;
    FUN_140e87440(&local_c8,DAT_141a1b910,0x80000000,&local_58,uVar6,
                  (ulonglong)ppuVar8 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar6 >> 0x20);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = (longlong *)CONCAT44(uRam0000000141dd899c,_DAT_141dd8998);
    uStack_c0 = uRam0000000141dd89a0;
    uStack_bc = DAT_141dd89a4;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_c8);
    local_68 = local_88;
    uVar6 = CONCAT44(uVar7,DAT_141a1c640);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_a8,1,uVar6,&local_68);
    iVar2 = FUN_140e851f0(&local_58,uVar4,DAT_141955260,0);
    if (iVar2 != 0) goto LAB_1409bcd3c;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0f48);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') goto LAB_1409bcd3c;
    local_38 = 0x7c;
  }
  uVar7 = (undefined4)(uVar6 >> 0x20);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_c8 = (longlong *)CONCAT44(uRam0000000141dd899c,_DAT_141dd8998);
  uStack_c0 = uRam0000000141dd89a0;
  uStack_bc = DAT_141dd89a4;
  local_ac = 5;
  local_b0 = 0;
  local_b8 = 0;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_c8);
  local_60 = local_78;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar7,DAT_141a1c640),&local_60);
  if (puVar3 != &local_98) {
    local_c8 = (longlong *)*puVar3;
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_c8);
  }
  FUN_140e86fa0(param_1,DAT_141a1b910,0x80000000,&local_98);
LAB_1409bcd3c:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

