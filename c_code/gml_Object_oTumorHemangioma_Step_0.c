// gml_Object_oTumorHemangioma_Step_0 @ 0x140de6100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oTumorHemangioma_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_ffffffffffffff10;
  undefined1 **ppuVar8;
  longlong *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  
  local_50 = "gml_Script_anon@429@gml_Object_oTumorHemangioma_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x1c;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x1e;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a025b8);
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a025f8);
  local_dc = 6;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_141a0f7f8,0x80000000,&local_88,uVar6,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_b0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = (longlong *)*puVar2;
  }
  else {
    FUN_1400419b0(&local_b8,puVar2);
  }
  FUN_1400462a0(&local_b8,&local_88);
  local_bc = local_ac;
  local_c0 = local_b0;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_c8 = local_b8;
  }
  else {
    FUN_1400419b0(&local_c8,&local_b8);
  }
  uStack_cc = 0;
  local_d8 = (longlong *)0x3fcc28f5c28f5c29;
  FUN_140042560(&local_c8,&local_d8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_dc = local_bc;
  local_e0 = local_c0;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_e8 = local_c8;
  }
  else {
    FUN_1400419b0(&local_e8,&local_c8);
  }
  FUN_140042560(&local_e8,puVar1);
  FUN_1400460e0(uVar3,&local_e8);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_48 = 0x1f;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_d8 = (longlong *)CONCAT44(uRam00000001419ee5b4,_DAT_1419ee5b0);
  uStack_d0 = uRam00000001419ee5b8;
  uStack_cc = uRam00000001419ee5bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_d8);
  local_40 = local_78;
  if (puVar1 != &local_68) {
    local_d8 = (longlong *)*puVar1;
    uStack_d0 = *(undefined4 *)(puVar1 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_d8);
  }
  local_38 = &local_68;
  FUN_140e609c0(param_1);
  ppuVar8 = &local_40;
  uVar6 = CONCAT44(uVar7,DAT_1419fa0f8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_a8,2,uVar6,ppuVar8);
  FUN_140042560(uVar3,uVar4);
  FUN_140e60910(1);
  local_48 = 0x20;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a025f8);
  uStack_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_141a0f7f8,0x80000000,&local_98,uVar6 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_e0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = (longlong *)*puVar2;
  }
  else {
    FUN_1400419b0(&local_e8,puVar2);
  }
  FUN_140042560(&local_e8,puVar1);
  FUN_1400460e0(&local_98,&local_e8);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_98);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

